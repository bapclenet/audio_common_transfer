/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by genmsg_cpp from file /tmp/buildd/ros-hydro-audio-common-msgs-0.2.6-0raring-20140304-0022/msg/AudioData.msg
 *
 */


#ifndef AUDIO_COMMON_MSGS_MESSAGE_AUDIODATA_H
#define AUDIO_COMMON_MSGS_MESSAGE_AUDIODATA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace audio_common_msgs
{
template <class ContainerAllocator>
struct AudioData_
{
  typedef AudioData_<ContainerAllocator> Type;

  AudioData_()
    : data()  {
    }
  AudioData_(const ContainerAllocator& _alloc)
    : data(_alloc)  {
    }



   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _data_type;
  _data_type data;




  typedef boost::shared_ptr< ::audio_common_msgs::AudioData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::audio_common_msgs::AudioData_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct AudioData_

typedef ::audio_common_msgs::AudioData_<std::allocator<void> > AudioData;

typedef boost::shared_ptr< ::audio_common_msgs::AudioData > AudioDataPtr;
typedef boost::shared_ptr< ::audio_common_msgs::AudioData const> AudioDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::audio_common_msgs::AudioData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::audio_common_msgs::AudioData_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace audio_common_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'audio_common_msgs': ['/tmp/buildd/ros-hydro-audio-common-msgs-0.2.6-0raring-20140304-0022/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::audio_common_msgs::AudioData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::audio_common_msgs::AudioData_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::audio_common_msgs::AudioData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::audio_common_msgs::AudioData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::audio_common_msgs::AudioData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::audio_common_msgs::AudioData_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::audio_common_msgs::AudioData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f43a8e1b362b75baa741461b46adc7e0";
  }

  static const char* value(const ::audio_common_msgs::AudioData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf43a8e1b362b75baULL;
  static const uint64_t static_value2 = 0xa741461b46adc7e0ULL;
};

template<class ContainerAllocator>
struct DataType< ::audio_common_msgs::AudioData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "audio_common_msgs/AudioData";
  }

  static const char* value(const ::audio_common_msgs::AudioData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::audio_common_msgs::AudioData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8[] data\n\
";
  }

  static const char* value(const ::audio_common_msgs::AudioData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::audio_common_msgs::AudioData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct AudioData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::audio_common_msgs::AudioData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::audio_common_msgs::AudioData_<ContainerAllocator>& v)
  {
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUDIO_COMMON_MSGS_MESSAGE_AUDIODATA_H
