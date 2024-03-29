// Generated by gencpp from file boustrophedon_msgs/StripingPoint.msg
// DO NOT EDIT!


#ifndef BOUSTROPHEDON_MSGS_MESSAGE_STRIPINGPOINT_H
#define BOUSTROPHEDON_MSGS_MESSAGE_STRIPINGPOINT_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>

namespace boustrophedon_msgs
{
template <class ContainerAllocator>
struct StripingPoint_
{
  typedef StripingPoint_<ContainerAllocator> Type;

  StripingPoint_()
    : point()
    , type(0)  {
    }
  StripingPoint_(const ContainerAllocator& _alloc)
    : point(_alloc)
    , type(0)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _point_type;
  _point_type point;

   typedef uint8_t _type_type;
  _type_type type;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(OUTLINE)
  #undef OUTLINE
#endif
#if defined(_WIN32) && defined(STRIPE_START)
  #undef STRIPE_START
#endif
#if defined(_WIN32) && defined(STRIPE_END)
  #undef STRIPE_END
#endif
#if defined(_WIN32) && defined(STRIPE_INTERMEDIATE)
  #undef STRIPE_INTERMEDIATE
#endif

  enum {
    OUTLINE = 0u,
    STRIPE_START = 1u,
    STRIPE_END = 2u,
    STRIPE_INTERMEDIATE = 3u,
  };


  typedef boost::shared_ptr< ::boustrophedon_msgs::StripingPoint_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::boustrophedon_msgs::StripingPoint_<ContainerAllocator> const> ConstPtr;

}; // struct StripingPoint_

typedef ::boustrophedon_msgs::StripingPoint_<std::allocator<void> > StripingPoint;

typedef boost::shared_ptr< ::boustrophedon_msgs::StripingPoint > StripingPointPtr;
typedef boost::shared_ptr< ::boustrophedon_msgs::StripingPoint const> StripingPointConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::boustrophedon_msgs::StripingPoint_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::boustrophedon_msgs::StripingPoint_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::boustrophedon_msgs::StripingPoint_<ContainerAllocator1> & lhs, const ::boustrophedon_msgs::StripingPoint_<ContainerAllocator2> & rhs)
{
  return lhs.point == rhs.point &&
    lhs.type == rhs.type;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::boustrophedon_msgs::StripingPoint_<ContainerAllocator1> & lhs, const ::boustrophedon_msgs::StripingPoint_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace boustrophedon_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::boustrophedon_msgs::StripingPoint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::boustrophedon_msgs::StripingPoint_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::boustrophedon_msgs::StripingPoint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::boustrophedon_msgs::StripingPoint_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::boustrophedon_msgs::StripingPoint_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::boustrophedon_msgs::StripingPoint_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::boustrophedon_msgs::StripingPoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e38799cac5b64d59df88339f62f9d457";
  }

  static const char* value(const ::boustrophedon_msgs::StripingPoint_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe38799cac5b64d59ULL;
  static const uint64_t static_value2 = 0xdf88339f62f9d457ULL;
};

template<class ContainerAllocator>
struct DataType< ::boustrophedon_msgs::StripingPoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "boustrophedon_msgs/StripingPoint";
  }

  static const char* value(const ::boustrophedon_msgs::StripingPoint_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::boustrophedon_msgs::StripingPoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Point point\n"
"uint8 type\n"
"\n"
"uint8 OUTLINE = 0\n"
"uint8 STRIPE_START = 1\n"
"uint8 STRIPE_END = 2\n"
"uint8 STRIPE_INTERMEDIATE = 3\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::boustrophedon_msgs::StripingPoint_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::boustrophedon_msgs::StripingPoint_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.point);
      stream.next(m.type);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct StripingPoint_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::boustrophedon_msgs::StripingPoint_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::boustrophedon_msgs::StripingPoint_<ContainerAllocator>& v)
  {
    s << indent << "point: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.point);
    s << indent << "type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.type);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BOUSTROPHEDON_MSGS_MESSAGE_STRIPINGPOINT_H
