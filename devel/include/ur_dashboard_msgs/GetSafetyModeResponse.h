// Generated by gencpp from file ur_dashboard_msgs/GetSafetyModeResponse.msg
// DO NOT EDIT!


#ifndef UR_DASHBOARD_MSGS_MESSAGE_GETSAFETYMODERESPONSE_H
#define UR_DASHBOARD_MSGS_MESSAGE_GETSAFETYMODERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <ur_dashboard_msgs/SafetyMode.h>

namespace ur_dashboard_msgs
{
template <class ContainerAllocator>
struct GetSafetyModeResponse_
{
  typedef GetSafetyModeResponse_<ContainerAllocator> Type;

  GetSafetyModeResponse_()
    : safety_mode()
    , answer()
    , success(false)  {
    }
  GetSafetyModeResponse_(const ContainerAllocator& _alloc)
    : safety_mode(_alloc)
    , answer(_alloc)
    , success(false)  {
  (void)_alloc;
    }



   typedef  ::ur_dashboard_msgs::SafetyMode_<ContainerAllocator>  _safety_mode_type;
  _safety_mode_type safety_mode;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _answer_type;
  _answer_type answer;

   typedef uint8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::ur_dashboard_msgs::GetSafetyModeResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ur_dashboard_msgs::GetSafetyModeResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetSafetyModeResponse_

typedef ::ur_dashboard_msgs::GetSafetyModeResponse_<std::allocator<void> > GetSafetyModeResponse;

typedef boost::shared_ptr< ::ur_dashboard_msgs::GetSafetyModeResponse > GetSafetyModeResponsePtr;
typedef boost::shared_ptr< ::ur_dashboard_msgs::GetSafetyModeResponse const> GetSafetyModeResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ur_dashboard_msgs::GetSafetyModeResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ur_dashboard_msgs::GetSafetyModeResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ur_dashboard_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'ur_dashboard_msgs': ['/home/ur-pc/slifer/ur_test/src/Universal_Robots_ROS_Driver/ur_dashboard_msgs/msg', '/home/ur-pc/slifer/ur_test/devel/share/ur_dashboard_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ur_dashboard_msgs::GetSafetyModeResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ur_dashboard_msgs::GetSafetyModeResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ur_dashboard_msgs::GetSafetyModeResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ur_dashboard_msgs::GetSafetyModeResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ur_dashboard_msgs::GetSafetyModeResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ur_dashboard_msgs::GetSafetyModeResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ur_dashboard_msgs::GetSafetyModeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "42900ff79a0c74f885536dc5add71b7e";
  }

  static const char* value(const ::ur_dashboard_msgs::GetSafetyModeResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x42900ff79a0c74f8ULL;
  static const uint64_t static_value2 = 0x85536dc5add71b7eULL;
};

template<class ContainerAllocator>
struct DataType< ::ur_dashboard_msgs::GetSafetyModeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ur_dashboard_msgs/GetSafetyModeResponse";
  }

  static const char* value(const ::ur_dashboard_msgs::GetSafetyModeResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ur_dashboard_msgs::GetSafetyModeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "SafetyMode safety_mode\n\
string answer\n\
bool success\n\
\n\
\n\
================================================================================\n\
MSG: ur_dashboard_msgs/SafetyMode\n\
uint8 NORMAL=1\n\
uint8 REDUCED=2\n\
uint8 PROTECTIVE_STOP=3\n\
uint8 RECOVERY=4\n\
uint8 SAFEGUARD_STOP=5\n\
uint8 SYSTEM_EMERGENCY_STOP=6\n\
uint8 ROBOT_EMERGENCY_STOP=7\n\
uint8 VIOLATION=8\n\
uint8 FAULT=9\n\
uint8 VALIDATE_JOINT_ID=10\n\
uint8 UNDEFINED_SAFETY_MODE=11\n\
uint8 AUTOMATIC_MODE_SAFEGUARD_STOP=12\n\
uint8 SYSTEM_THREE_POSITION_ENABLING_STOP=13\n\
\n\
uint8 mode\n\
";
  }

  static const char* value(const ::ur_dashboard_msgs::GetSafetyModeResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ur_dashboard_msgs::GetSafetyModeResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.safety_mode);
      stream.next(m.answer);
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetSafetyModeResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ur_dashboard_msgs::GetSafetyModeResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ur_dashboard_msgs::GetSafetyModeResponse_<ContainerAllocator>& v)
  {
    s << indent << "safety_mode: ";
    s << std::endl;
    Printer< ::ur_dashboard_msgs::SafetyMode_<ContainerAllocator> >::stream(s, indent + "  ", v.safety_mode);
    s << indent << "answer: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.answer);
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UR_DASHBOARD_MSGS_MESSAGE_GETSAFETYMODERESPONSE_H
