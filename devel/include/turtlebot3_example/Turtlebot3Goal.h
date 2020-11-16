// Generated by gencpp from file turtlebot3_example/Turtlebot3Goal.msg
// DO NOT EDIT!


#ifndef TURTLEBOT3_EXAMPLE_MESSAGE_TURTLEBOT3GOAL_H
#define TURTLEBOT3_EXAMPLE_MESSAGE_TURTLEBOT3GOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Vector3.h>

namespace turtlebot3_example
{
template <class ContainerAllocator>
struct Turtlebot3Goal_
{
  typedef Turtlebot3Goal_<ContainerAllocator> Type;

  Turtlebot3Goal_()
    : goal()  {
    }
  Turtlebot3Goal_(const ContainerAllocator& _alloc)
    : goal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _goal_type;
  _goal_type goal;





  typedef boost::shared_ptr< ::turtlebot3_example::Turtlebot3Goal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::turtlebot3_example::Turtlebot3Goal_<ContainerAllocator> const> ConstPtr;

}; // struct Turtlebot3Goal_

typedef ::turtlebot3_example::Turtlebot3Goal_<std::allocator<void> > Turtlebot3Goal;

typedef boost::shared_ptr< ::turtlebot3_example::Turtlebot3Goal > Turtlebot3GoalPtr;
typedef boost::shared_ptr< ::turtlebot3_example::Turtlebot3Goal const> Turtlebot3GoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::turtlebot3_example::Turtlebot3Goal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::turtlebot3_example::Turtlebot3Goal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace turtlebot3_example

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'turtlebot3_example': ['/home/robot/charlie_ws/devel/share/turtlebot3_example/msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::turtlebot3_example::Turtlebot3Goal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::turtlebot3_example::Turtlebot3Goal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlebot3_example::Turtlebot3Goal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlebot3_example::Turtlebot3Goal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlebot3_example::Turtlebot3Goal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlebot3_example::Turtlebot3Goal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::turtlebot3_example::Turtlebot3Goal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8ad3bd0e46ff6777ce7cd2fdd945cb9e";
  }

  static const char* value(const ::turtlebot3_example::Turtlebot3Goal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8ad3bd0e46ff6777ULL;
  static const uint64_t static_value2 = 0xce7cd2fdd945cb9eULL;
};

template<class ContainerAllocator>
struct DataType< ::turtlebot3_example::Turtlebot3Goal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "turtlebot3_example/Turtlebot3Goal";
  }

  static const char* value(const ::turtlebot3_example::Turtlebot3Goal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::turtlebot3_example::Turtlebot3Goal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Define the goal\n\
geometry_msgs/Vector3 goal\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::turtlebot3_example::Turtlebot3Goal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::turtlebot3_example::Turtlebot3Goal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Turtlebot3Goal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::turtlebot3_example::Turtlebot3Goal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::turtlebot3_example::Turtlebot3Goal_<ContainerAllocator>& v)
  {
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TURTLEBOT3_EXAMPLE_MESSAGE_TURTLEBOT3GOAL_H
