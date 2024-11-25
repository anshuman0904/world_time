// This file is generated by omniidl (C++ backend)- omniORB_4_3. Do not edit.

#include <omniORB4/objTracker.h>

void
ZIOP::CompressedData::operator>>= (cdrStream &_n) const
{
  compressorid >>= _n;
  original_length >>= _n;
  (const Compression::Buffer&) data >>= _n;

}

void
ZIOP::CompressedData::operator<<= (cdrStream &_n)
{
  (Compression::CompressorId&)compressorid <<= _n;
  (::CORBA::ULong&)original_length <<= _n;
  (Compression::Buffer&)data <<= _n;

}

_init_in_def_( const ::CORBA::ULong ZIOP::COMPRESSION_ENABLING_POLICY_ID = 64U; )

_init_in_def_( const ::CORBA::ULong ZIOP::COMPRESSOR_ID_LEVEL_LIST_POLICY_ID = 65U; )

_init_in_def_( const ::CORBA::ULong ZIOP::COMPRESSION_LOW_VALUE_POLICY_ID = 66U; )

_init_in_def_( const ::CORBA::ULong ZIOP::COMPRESSION_MIN_RATIO_POLICY_ID = 67U; )

