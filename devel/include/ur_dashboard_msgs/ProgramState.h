// Generated by gencpp from file ur_dashboard_msgs/ProgramState.msg
// DO NOT EDIT!


#ifndef UR_DASHBOARD_MSGS_MESSAGE_PROGRAMSTATE_H
#define UR_DASHBOARD_MSGS_MESSAGE_PROGRAMSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ur_dashboard_msgs
{
template <class ContainerAllocator>
struct ProgramState_
{
  typedef ProgramState_<ContainerAllocator> Type;

  ProgramState_()
    : state()  {
    }
  ProgramState_(const ContainerAllocator& _alloc)
    : state(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _state_type;
  _state_type state;




  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  STOPPED;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  PLAYING;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  PAUSED;

  typedef boost::shared_ptr< ::ur_dashboard_msgs::ProgramState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ur_dashboard_msgs::ProgramState_<ContainerAllocator> const> ConstPtr;

}; // struct ProgramState_

typedef ::ur_dashboard_msgs::ProgramState_<std::allocator<void> > ProgramState;

typedef boost::shared_ptr< ::ur_dashboard_msgs::ProgramState > ProgramStatePtr;
typedef boost::shared_ptr< ::ur_dashboard_msgs::ProgramState const> ProgramStateConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      ProgramState_<ContainerAllocator>::STOPPED =
        
          "STOPPED"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      ProgramState_<ContainerAllocator>::PLAYING =
        
          "PLAYING"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      ProgramState_<ContainerAllocator>::PAUSED =
        
          "PAUSED"
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ur_dashboard_msgs::ProgramState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ur_dashboard_msgs::ProgramState_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::ur_dashboard_msgs::ProgramState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ur_dashboard_msgs::ProgramState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ur_dashboard_msgs::ProgramState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ur_dashboard_msgs::ProgramState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ur_dashboard_msgs::ProgramState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ur_dashboard_msgs::ProgramState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ur_dashboard_msgs::ProgramState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0cf2a8b9397741f9e4ac8b71fd354966";
  }

  static const char* value(const ::ur_dashboard_msgs::ProgramState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0cf2a8b9397741f9ULL;
  static const uint64_t static_value2 = 0xe4ac8b71fd354966ULL;
};

template<class ContainerAllocator>
struct DataType< ::ur_dashboard_msgs::ProgramState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ur_dashboard_msgs/ProgramState";
  }

  static const char* value(const ::ur_dashboard_msgs::ProgramState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ur_dashboard_msgs::ProgramState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string STOPPED=STOPPED\n\
string PLAYING=PLAYING\n\
string PAUSED=PAUSED\n\
\n\
string state\n\
\n\
";
  }

  static const char* value(const ::ur_dashboard_msgs::ProgramState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ur_dashboard_msgs::ProgramState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.state);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ProgramState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ur_dashboard_msgs::ProgramState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ur_dashboard_msgs::ProgramState_<ContainerAllocator>& v)
  {
    s << indent << "state: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.state);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UR_DASHBOARD_MSGS_MESSAGE_PROGRAMSTATE_H