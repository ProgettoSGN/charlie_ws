#!/usr/bin/env python
"""
Meant to configure not only the device but the entire network
on the same UWB settings.

This should be run once every time you change settings etc but no
more than that, as it saves to flash. It's a ROS node that runs
until done then dies, so running this until it completes and then
starting the other nodes is valid.

PS: Don't forget the anchor configuration.
"""

import pypozyx
import rospy

new_uwb_settings = pypozyx.UWBSettings(
    channel=3, bitrate=2, prf=2, plen=0x04, gain_db=33)
# bitrate da 2 a 1 0x04
gain_db = 33.0


def set_same_uwb_settings():
    rospy.init_node('uwb_configurator')
    devices_met = []
    uwb_registers = [0x1C, 0x1D, 0x1E, 0x1F]
    rospy.loginfo("Setting all encountered devices to UWB settings: %s" %
                  str(new_uwb_settings))
    try:
        # pozyx = pypozyx.PozyxSerial(pypozyx.get_serial_ports()[].device)
			pozyx_serial = pypozyx.get_pozyx_ports()[0]
	
			pozyx = pypozyx.PozyxSerial(pozyx_serial)

    except:
        rospy.loginfo("Pozyx not connected")
        return
    for channel in pypozyx.POZYX_ALL_CHANNELS:
        for bitrate in pypozyx.POZYX_ALL_BITRATES:
            for prf in pypozyx.POZYX_ALL_PRFS:
                for plen in pypozyx.POZYX_ALL_PLENS:
                    uwb_settings = pypozyx.UWBSettings(
                        channel, bitrate, prf, plen, gain_db)
                    pozyx.clearDevices()
                    pozyx.setUWBSettings(uwb_settings)
                    pozyx.doDiscovery(pypozyx.POZYX_DISCOVERY_ALL_DEVICES)
                    device_list_size = pypozyx.SingleRegister()
                    pozyx.getDeviceListSize(device_list_size)
                    if device_list_size[0] > 0:
                        device_list = pypozyx.DeviceList(
                            list_size=device_list_size[0])
                        pozyx.getDeviceIds(device_list)
                        for device in device_list:
                            if device not in devices_met:
                                pozyx.setUWBSettings(new_uwb_settings, device)
                                pozyx.saveRegisters(uwb_registers, device)
                                rospy.loginfo(
                                    'Device with ID 0x%0.4x is set' % device)
                                devices_met.append(device)
    pozyx.setUWBSettings(new_uwb_settings)
    pozyx.saveRegisters(uwb_registers)
    rospy.loginfo("Local device set! Shutting down configurator node now...")


if __name__ == '__main__':
    set_same_uwb_settings()
