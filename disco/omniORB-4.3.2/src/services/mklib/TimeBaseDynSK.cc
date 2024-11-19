// This file is generated by omniidl (C++ backend) - omniORB_4_3. Do not edit.

#include "TimeBase.hh"

OMNI_USING_NAMESPACE(omni)

static const char* _0RL_dyn_library_version = omniORB_4_3_dyn;

static ::CORBA::TypeCode::_Tracker _0RL_tcTrack(__FILE__);

static CORBA::TypeCode_ptr _0RL_tc_TimeBase_mTimeT = CORBA::TypeCode::PR_alias_tc("IDL:omg.org/TimeBase/TimeT:1.0", "TimeT", CORBA::TypeCode::PR_ulonglong_tc(), &_0RL_tcTrack);


#if defined(OMNI_HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace TimeBase { 
  const ::CORBA::TypeCode_ptr _tc_TimeT = _0RL_tc_TimeBase_mTimeT;
} 
#else
const ::CORBA::TypeCode_ptr TimeBase::_tc_TimeT = _0RL_tc_TimeBase_mTimeT;
#endif

static CORBA::TypeCode_ptr _0RL_tc_TimeBase_mInaccuracyT = CORBA::TypeCode::PR_alias_tc("IDL:omg.org/TimeBase/InaccuracyT:1.0", "InaccuracyT", _0RL_tc_TimeBase_mTimeT, &_0RL_tcTrack);


#if defined(OMNI_HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace TimeBase { 
  const ::CORBA::TypeCode_ptr _tc_InaccuracyT = _0RL_tc_TimeBase_mInaccuracyT;
} 
#else
const ::CORBA::TypeCode_ptr TimeBase::_tc_InaccuracyT = _0RL_tc_TimeBase_mInaccuracyT;
#endif

static CORBA::TypeCode_ptr _0RL_tc_TimeBase_mTdfT = CORBA::TypeCode::PR_alias_tc("IDL:omg.org/TimeBase/TdfT:1.0", "TdfT", CORBA::TypeCode::PR_short_tc(), &_0RL_tcTrack);


#if defined(OMNI_HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace TimeBase { 
  const ::CORBA::TypeCode_ptr _tc_TdfT = _0RL_tc_TimeBase_mTdfT;
} 
#else
const ::CORBA::TypeCode_ptr TimeBase::_tc_TdfT = _0RL_tc_TimeBase_mTdfT;
#endif

static CORBA::PR_structMember _0RL_structmember_TimeBase_mUtcT[] = {
  {"time", _0RL_tc_TimeBase_mTimeT},
  {"inacclo", CORBA::TypeCode::PR_ulong_tc()},
  {"inacchi", CORBA::TypeCode::PR_ushort_tc()},
  {"tdf", _0RL_tc_TimeBase_mTdfT}
};

#ifdef _0RL_tc_TimeBase_mUtcT
#  undef _0RL_tc_TimeBase_mUtcT
#endif
static CORBA::TypeCode_ptr _0RL_tc_TimeBase_mUtcT = CORBA::TypeCode::PR_struct_tc("IDL:omg.org/TimeBase/UtcT:1.0", "UtcT", _0RL_structmember_TimeBase_mUtcT, 4, &_0RL_tcTrack);

#if defined(OMNI_HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace TimeBase { 
  const ::CORBA::TypeCode_ptr _tc_UtcT = _0RL_tc_TimeBase_mUtcT;
} 
#else
const ::CORBA::TypeCode_ptr TimeBase::_tc_UtcT = _0RL_tc_TimeBase_mUtcT;
#endif


static CORBA::PR_structMember _0RL_structmember_TimeBase_mIntervalT[] = {
  {"lower_bound", _0RL_tc_TimeBase_mTimeT},
  {"upper_bound", _0RL_tc_TimeBase_mTimeT}
};

#ifdef _0RL_tc_TimeBase_mIntervalT
#  undef _0RL_tc_TimeBase_mIntervalT
#endif
static CORBA::TypeCode_ptr _0RL_tc_TimeBase_mIntervalT = CORBA::TypeCode::PR_struct_tc("IDL:omg.org/TimeBase/IntervalT:1.0", "IntervalT", _0RL_structmember_TimeBase_mIntervalT, 2, &_0RL_tcTrack);

#if defined(OMNI_HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace TimeBase { 
  const ::CORBA::TypeCode_ptr _tc_IntervalT = _0RL_tc_TimeBase_mIntervalT;
} 
#else
const ::CORBA::TypeCode_ptr TimeBase::_tc_IntervalT = _0RL_tc_TimeBase_mIntervalT;
#endif


static void _0RL_TimeBase_mUtcT_marshal_fn(cdrStream& _s, void* _v)
{
  TimeBase::UtcT* _p = (TimeBase::UtcT*)_v;
  *_p >>= _s;
}
static void _0RL_TimeBase_mUtcT_unmarshal_fn(cdrStream& _s, void*& _v)
{
  TimeBase::UtcT* _p = new TimeBase::UtcT;
  *_p <<= _s;
  _v = _p;
}
static void _0RL_TimeBase_mUtcT_destructor_fn(void* _v)
{
  TimeBase::UtcT* _p = (TimeBase::UtcT*)_v;
  delete _p;
}

void operator<<=(::CORBA::Any& _a, const TimeBase::UtcT& _s)
{
  TimeBase::UtcT* _p = new TimeBase::UtcT(_s);
  _a.PR_insert(_0RL_tc_TimeBase_mUtcT,
               _0RL_TimeBase_mUtcT_marshal_fn,
               _0RL_TimeBase_mUtcT_destructor_fn,
               _p);
}
void operator<<=(::CORBA::Any& _a, TimeBase::UtcT* _sp)
{
  _a.PR_insert(_0RL_tc_TimeBase_mUtcT,
               _0RL_TimeBase_mUtcT_marshal_fn,
               _0RL_TimeBase_mUtcT_destructor_fn,
               _sp);
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, TimeBase::UtcT*& _sp)
{
  return _a >>= (const TimeBase::UtcT*&) _sp;
}
::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, const TimeBase::UtcT*& _sp)
{
  void* _v;
  if (_a.PR_extract(_0RL_tc_TimeBase_mUtcT,
                    _0RL_TimeBase_mUtcT_unmarshal_fn,
                    _0RL_TimeBase_mUtcT_marshal_fn,
                    _0RL_TimeBase_mUtcT_destructor_fn,
                    _v)) {
    _sp = (const TimeBase::UtcT*)_v;
    return 1;
  }
  return 0;
}

static void _0RL_TimeBase_mIntervalT_marshal_fn(cdrStream& _s, void* _v)
{
  TimeBase::IntervalT* _p = (TimeBase::IntervalT*)_v;
  *_p >>= _s;
}
static void _0RL_TimeBase_mIntervalT_unmarshal_fn(cdrStream& _s, void*& _v)
{
  TimeBase::IntervalT* _p = new TimeBase::IntervalT;
  *_p <<= _s;
  _v = _p;
}
static void _0RL_TimeBase_mIntervalT_destructor_fn(void* _v)
{
  TimeBase::IntervalT* _p = (TimeBase::IntervalT*)_v;
  delete _p;
}

void operator<<=(::CORBA::Any& _a, const TimeBase::IntervalT& _s)
{
  TimeBase::IntervalT* _p = new TimeBase::IntervalT(_s);
  _a.PR_insert(_0RL_tc_TimeBase_mIntervalT,
               _0RL_TimeBase_mIntervalT_marshal_fn,
               _0RL_TimeBase_mIntervalT_destructor_fn,
               _p);
}
void operator<<=(::CORBA::Any& _a, TimeBase::IntervalT* _sp)
{
  _a.PR_insert(_0RL_tc_TimeBase_mIntervalT,
               _0RL_TimeBase_mIntervalT_marshal_fn,
               _0RL_TimeBase_mIntervalT_destructor_fn,
               _sp);
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, TimeBase::IntervalT*& _sp)
{
  return _a >>= (const TimeBase::IntervalT*&) _sp;
}
::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, const TimeBase::IntervalT*& _sp)
{
  void* _v;
  if (_a.PR_extract(_0RL_tc_TimeBase_mIntervalT,
                    _0RL_TimeBase_mIntervalT_unmarshal_fn,
                    _0RL_TimeBase_mIntervalT_marshal_fn,
                    _0RL_TimeBase_mIntervalT_destructor_fn,
                    _v)) {
    _sp = (const TimeBase::IntervalT*)_v;
    return 1;
  }
  return 0;
}

