// This file is generated by omniidl (C++ backend) - omniORB_4_3. Do not edit.

#include "CosNotifyComm.hh"

OMNI_USING_NAMESPACE(omni)

static const char* _0RL_dyn_library_version = omniORB_4_3_dyn;

static ::CORBA::TypeCode::_Tracker _0RL_tcTrack(__FILE__);

static CORBA::PR_structMember _0RL_structmember_CosNotification_mEventType[] = {
  {"domain_name", CORBA::TypeCode::PR_string_tc(0, &_0RL_tcTrack)},
  {"type_name", CORBA::TypeCode::PR_string_tc(0, &_0RL_tcTrack)}
};

#ifdef _0RL_tc_CosNotification_mEventType
#  undef _0RL_tc_CosNotification_mEventType
#endif
static CORBA::TypeCode_ptr _0RL_tc_CosNotification_mEventType = CORBA::TypeCode::PR_struct_tc("IDL:omg.org/CosNotification/EventType:1.0", "EventType", _0RL_structmember_CosNotification_mEventType, 2, &_0RL_tcTrack);

static CORBA::PR_structMember _0RL_structmember_CosNotifyComm_mInvalidEventType[] = {
  {"type", _0RL_tc_CosNotification_mEventType}
};

static CORBA::TypeCode_ptr _0RL_tc_CosNotifyComm_mInvalidEventType = CORBA::TypeCode::PR_exception_tc("IDL:omg.org/CosNotifyComm/InvalidEventType:1.0", "InvalidEventType", _0RL_structmember_CosNotifyComm_mInvalidEventType, 1, &_0RL_tcTrack);

#if defined(OMNI_HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace CosNotifyComm { 
  const ::CORBA::TypeCode_ptr _tc_InvalidEventType = _0RL_tc_CosNotifyComm_mInvalidEventType;
} 
#else
const ::CORBA::TypeCode_ptr CosNotifyComm::_tc_InvalidEventType = _0RL_tc_CosNotifyComm_mInvalidEventType;
#endif


#if defined(OMNI_HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace CosNotifyComm { 
  const ::CORBA::TypeCode_ptr _tc_NotifyPublish = CORBA::TypeCode::PR_interface_tc("IDL:omg.org/CosNotifyComm/NotifyPublish:1.0", "NotifyPublish", &_0RL_tcTrack);
} 
#else
const ::CORBA::TypeCode_ptr CosNotifyComm::_tc_NotifyPublish = CORBA::TypeCode::PR_interface_tc("IDL:omg.org/CosNotifyComm/NotifyPublish:1.0", "NotifyPublish", &_0RL_tcTrack);
#endif

#if defined(OMNI_HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace CosNotifyComm { 
  const ::CORBA::TypeCode_ptr _tc_NotifySubscribe = CORBA::TypeCode::PR_interface_tc("IDL:omg.org/CosNotifyComm/NotifySubscribe:1.0", "NotifySubscribe", &_0RL_tcTrack);
} 
#else
const ::CORBA::TypeCode_ptr CosNotifyComm::_tc_NotifySubscribe = CORBA::TypeCode::PR_interface_tc("IDL:omg.org/CosNotifyComm/NotifySubscribe:1.0", "NotifySubscribe", &_0RL_tcTrack);
#endif

#if defined(OMNI_HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace CosNotifyComm { 
  const ::CORBA::TypeCode_ptr _tc_PushConsumer = CORBA::TypeCode::PR_interface_tc("IDL:omg.org/CosNotifyComm/PushConsumer:1.0", "PushConsumer", &_0RL_tcTrack);
} 
#else
const ::CORBA::TypeCode_ptr CosNotifyComm::_tc_PushConsumer = CORBA::TypeCode::PR_interface_tc("IDL:omg.org/CosNotifyComm/PushConsumer:1.0", "PushConsumer", &_0RL_tcTrack);
#endif

#if defined(OMNI_HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace CosNotifyComm { 
  const ::CORBA::TypeCode_ptr _tc_PullConsumer = CORBA::TypeCode::PR_interface_tc("IDL:omg.org/CosNotifyComm/PullConsumer:1.0", "PullConsumer", &_0RL_tcTrack);
} 
#else
const ::CORBA::TypeCode_ptr CosNotifyComm::_tc_PullConsumer = CORBA::TypeCode::PR_interface_tc("IDL:omg.org/CosNotifyComm/PullConsumer:1.0", "PullConsumer", &_0RL_tcTrack);
#endif

#if defined(OMNI_HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace CosNotifyComm { 
  const ::CORBA::TypeCode_ptr _tc_PullSupplier = CORBA::TypeCode::PR_interface_tc("IDL:omg.org/CosNotifyComm/PullSupplier:1.0", "PullSupplier", &_0RL_tcTrack);
} 
#else
const ::CORBA::TypeCode_ptr CosNotifyComm::_tc_PullSupplier = CORBA::TypeCode::PR_interface_tc("IDL:omg.org/CosNotifyComm/PullSupplier:1.0", "PullSupplier", &_0RL_tcTrack);
#endif

#if defined(OMNI_HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace CosNotifyComm { 
  const ::CORBA::TypeCode_ptr _tc_PushSupplier = CORBA::TypeCode::PR_interface_tc("IDL:omg.org/CosNotifyComm/PushSupplier:1.0", "PushSupplier", &_0RL_tcTrack);
} 
#else
const ::CORBA::TypeCode_ptr CosNotifyComm::_tc_PushSupplier = CORBA::TypeCode::PR_interface_tc("IDL:omg.org/CosNotifyComm/PushSupplier:1.0", "PushSupplier", &_0RL_tcTrack);
#endif

#if defined(OMNI_HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace CosNotifyComm { 
  const ::CORBA::TypeCode_ptr _tc_StructuredPushConsumer = CORBA::TypeCode::PR_interface_tc("IDL:omg.org/CosNotifyComm/StructuredPushConsumer:1.0", "StructuredPushConsumer", &_0RL_tcTrack);
} 
#else
const ::CORBA::TypeCode_ptr CosNotifyComm::_tc_StructuredPushConsumer = CORBA::TypeCode::PR_interface_tc("IDL:omg.org/CosNotifyComm/StructuredPushConsumer:1.0", "StructuredPushConsumer", &_0RL_tcTrack);
#endif

#if defined(OMNI_HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace CosNotifyComm { 
  const ::CORBA::TypeCode_ptr _tc_StructuredPullConsumer = CORBA::TypeCode::PR_interface_tc("IDL:omg.org/CosNotifyComm/StructuredPullConsumer:1.0", "StructuredPullConsumer", &_0RL_tcTrack);
} 
#else
const ::CORBA::TypeCode_ptr CosNotifyComm::_tc_StructuredPullConsumer = CORBA::TypeCode::PR_interface_tc("IDL:omg.org/CosNotifyComm/StructuredPullConsumer:1.0", "StructuredPullConsumer", &_0RL_tcTrack);
#endif

#if defined(OMNI_HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace CosNotifyComm { 
  const ::CORBA::TypeCode_ptr _tc_StructuredPullSupplier = CORBA::TypeCode::PR_interface_tc("IDL:omg.org/CosNotifyComm/StructuredPullSupplier:1.0", "StructuredPullSupplier", &_0RL_tcTrack);
} 
#else
const ::CORBA::TypeCode_ptr CosNotifyComm::_tc_StructuredPullSupplier = CORBA::TypeCode::PR_interface_tc("IDL:omg.org/CosNotifyComm/StructuredPullSupplier:1.0", "StructuredPullSupplier", &_0RL_tcTrack);
#endif

#if defined(OMNI_HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace CosNotifyComm { 
  const ::CORBA::TypeCode_ptr _tc_StructuredPushSupplier = CORBA::TypeCode::PR_interface_tc("IDL:omg.org/CosNotifyComm/StructuredPushSupplier:1.0", "StructuredPushSupplier", &_0RL_tcTrack);
} 
#else
const ::CORBA::TypeCode_ptr CosNotifyComm::_tc_StructuredPushSupplier = CORBA::TypeCode::PR_interface_tc("IDL:omg.org/CosNotifyComm/StructuredPushSupplier:1.0", "StructuredPushSupplier", &_0RL_tcTrack);
#endif

#if defined(OMNI_HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace CosNotifyComm { 
  const ::CORBA::TypeCode_ptr _tc_SequencePushConsumer = CORBA::TypeCode::PR_interface_tc("IDL:omg.org/CosNotifyComm/SequencePushConsumer:1.0", "SequencePushConsumer", &_0RL_tcTrack);
} 
#else
const ::CORBA::TypeCode_ptr CosNotifyComm::_tc_SequencePushConsumer = CORBA::TypeCode::PR_interface_tc("IDL:omg.org/CosNotifyComm/SequencePushConsumer:1.0", "SequencePushConsumer", &_0RL_tcTrack);
#endif

#if defined(OMNI_HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace CosNotifyComm { 
  const ::CORBA::TypeCode_ptr _tc_SequencePullConsumer = CORBA::TypeCode::PR_interface_tc("IDL:omg.org/CosNotifyComm/SequencePullConsumer:1.0", "SequencePullConsumer", &_0RL_tcTrack);
} 
#else
const ::CORBA::TypeCode_ptr CosNotifyComm::_tc_SequencePullConsumer = CORBA::TypeCode::PR_interface_tc("IDL:omg.org/CosNotifyComm/SequencePullConsumer:1.0", "SequencePullConsumer", &_0RL_tcTrack);
#endif

#if defined(OMNI_HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace CosNotifyComm { 
  const ::CORBA::TypeCode_ptr _tc_SequencePullSupplier = CORBA::TypeCode::PR_interface_tc("IDL:omg.org/CosNotifyComm/SequencePullSupplier:1.0", "SequencePullSupplier", &_0RL_tcTrack);
} 
#else
const ::CORBA::TypeCode_ptr CosNotifyComm::_tc_SequencePullSupplier = CORBA::TypeCode::PR_interface_tc("IDL:omg.org/CosNotifyComm/SequencePullSupplier:1.0", "SequencePullSupplier", &_0RL_tcTrack);
#endif

#if defined(OMNI_HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace CosNotifyComm { 
  const ::CORBA::TypeCode_ptr _tc_SequencePushSupplier = CORBA::TypeCode::PR_interface_tc("IDL:omg.org/CosNotifyComm/SequencePushSupplier:1.0", "SequencePushSupplier", &_0RL_tcTrack);
} 
#else
const ::CORBA::TypeCode_ptr CosNotifyComm::_tc_SequencePushSupplier = CORBA::TypeCode::PR_interface_tc("IDL:omg.org/CosNotifyComm/SequencePushSupplier:1.0", "SequencePushSupplier", &_0RL_tcTrack);
#endif


static void _0RL_CosNotifyComm_mInvalidEventType_marshal_fn(cdrStream& _s, void* _v)
{
  const CosNotifyComm::InvalidEventType* _p = (const CosNotifyComm::InvalidEventType*)_v;
  ::CORBA::Any::PR_marshalExceptionRepoId(_s, _p->_rep_id());
  *_p >>= _s;
}
static void _0RL_CosNotifyComm_mInvalidEventType_unmarshal_fn(cdrStream& _s, void*& _v)
{
  ::CORBA::Any::PR_unmarshalExceptionRepoId(_s);
  CosNotifyComm::InvalidEventType* _p = new CosNotifyComm::InvalidEventType;
  *_p <<= _s;
  _v = _p;
}
static void _0RL_CosNotifyComm_mInvalidEventType_destructor_fn(void* _v)
{
  CosNotifyComm::InvalidEventType* _p = (CosNotifyComm::InvalidEventType*)_v;
  delete _p;
}

void operator<<=(::CORBA::Any& _a, const CosNotifyComm::InvalidEventType& _s)
{
  CosNotifyComm::InvalidEventType* _p = new CosNotifyComm::InvalidEventType(_s);
  _a.PR_insert(_0RL_tc_CosNotifyComm_mInvalidEventType,
               _0RL_CosNotifyComm_mInvalidEventType_marshal_fn,
               _0RL_CosNotifyComm_mInvalidEventType_destructor_fn,
               _p);
}
void operator<<=(::CORBA::Any& _a, const CosNotifyComm::InvalidEventType* _sp)
{
  _a.PR_insert(_0RL_tc_CosNotifyComm_mInvalidEventType,
               _0RL_CosNotifyComm_mInvalidEventType_marshal_fn,
               _0RL_CosNotifyComm_mInvalidEventType_destructor_fn,
               (CosNotifyComm::InvalidEventType*)_sp);
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, const CosNotifyComm::InvalidEventType*& _sp)
{
  void* _v;
  if (_a.PR_extract(_0RL_tc_CosNotifyComm_mInvalidEventType,
                    _0RL_CosNotifyComm_mInvalidEventType_unmarshal_fn,
                    _0RL_CosNotifyComm_mInvalidEventType_marshal_fn,
                    _0RL_CosNotifyComm_mInvalidEventType_destructor_fn,
                    _v)) {
    _sp = (const CosNotifyComm::InvalidEventType*)_v;
    return 1;
  }
  return 0;
}

static void _0RL_insertToAny__cCosNotifyComm_mInvalidEventType(::CORBA::Any& _a, const ::CORBA::Exception& _e) {
  const CosNotifyComm::InvalidEventType & _ex = (const CosNotifyComm::InvalidEventType &) _e;
  operator<<=(_a,_ex);
}

static void _0RL_insertToAnyNCP__cCosNotifyComm_mInvalidEventType (::CORBA::Any& _a, const ::CORBA::Exception* _e) {
  const CosNotifyComm::InvalidEventType* _ex = (const CosNotifyComm::InvalidEventType*) _e;
  operator<<=(_a,_ex);
}

class _0RL_insertToAny_Singleton__cCosNotifyComm_mInvalidEventType {
public:
  _0RL_insertToAny_Singleton__cCosNotifyComm_mInvalidEventType() {
    CosNotifyComm::InvalidEventType::insertToAnyFn = _0RL_insertToAny__cCosNotifyComm_mInvalidEventType;
    CosNotifyComm::InvalidEventType::insertToAnyFnNCP = _0RL_insertToAnyNCP__cCosNotifyComm_mInvalidEventType;
  }
};
static _0RL_insertToAny_Singleton__cCosNotifyComm_mInvalidEventType _0RL_insertToAny_Singleton__cCosNotifyComm_mInvalidEventType_;

static void _0RL_CosNotifyComm_mNotifyPublish_marshal_fn(cdrStream& _s, void* _v)
{
  omniObjRef* _o = (omniObjRef*)_v;
  omniObjRef::_marshal(_o, _s);
}
static void _0RL_CosNotifyComm_mNotifyPublish_unmarshal_fn(cdrStream& _s, void*& _v)
{
  omniObjRef* _o = omniObjRef::_unMarshal(CosNotifyComm::NotifyPublish::_PD_repoId, _s);
  _v = _o;
}
static void _0RL_CosNotifyComm_mNotifyPublish_destructor_fn(void* _v)
{
  omniObjRef* _o = (omniObjRef*)_v;
  if (_o)
    omni::releaseObjRef(_o);
}

void operator<<=(::CORBA::Any& _a, CosNotifyComm::NotifyPublish_ptr _o)
{
  CosNotifyComm::NotifyPublish_ptr _no = CosNotifyComm::NotifyPublish::_duplicate(_o);
  _a.PR_insert(CosNotifyComm::_tc_NotifyPublish,
               _0RL_CosNotifyComm_mNotifyPublish_marshal_fn,
               _0RL_CosNotifyComm_mNotifyPublish_destructor_fn,
               _no->_PR_getobj());
}
void operator<<=(::CORBA::Any& _a, CosNotifyComm::NotifyPublish_ptr* _op)
{
  _a.PR_insert(CosNotifyComm::_tc_NotifyPublish,
               _0RL_CosNotifyComm_mNotifyPublish_marshal_fn,
               _0RL_CosNotifyComm_mNotifyPublish_destructor_fn,
               (*_op)->_PR_getobj());
  *_op = CosNotifyComm::NotifyPublish::_nil();
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, CosNotifyComm::NotifyPublish_ptr& _o)
{
  void* _v;
  if (_a.PR_extract(CosNotifyComm::_tc_NotifyPublish,
                    _0RL_CosNotifyComm_mNotifyPublish_unmarshal_fn,
                    _0RL_CosNotifyComm_mNotifyPublish_marshal_fn,
                    _0RL_CosNotifyComm_mNotifyPublish_destructor_fn,
                    _v)) {
    omniObjRef* _r = (omniObjRef*)_v;
    if (_r)
      _o = (CosNotifyComm::NotifyPublish_ptr)_r->_ptrToObjRef(CosNotifyComm::NotifyPublish::_PD_repoId);
    else
      _o = CosNotifyComm::NotifyPublish::_nil();
    return 1;
  }
  return 0;
}

static void _0RL_CosNotifyComm_mNotifySubscribe_marshal_fn(cdrStream& _s, void* _v)
{
  omniObjRef* _o = (omniObjRef*)_v;
  omniObjRef::_marshal(_o, _s);
}
static void _0RL_CosNotifyComm_mNotifySubscribe_unmarshal_fn(cdrStream& _s, void*& _v)
{
  omniObjRef* _o = omniObjRef::_unMarshal(CosNotifyComm::NotifySubscribe::_PD_repoId, _s);
  _v = _o;
}
static void _0RL_CosNotifyComm_mNotifySubscribe_destructor_fn(void* _v)
{
  omniObjRef* _o = (omniObjRef*)_v;
  if (_o)
    omni::releaseObjRef(_o);
}

void operator<<=(::CORBA::Any& _a, CosNotifyComm::NotifySubscribe_ptr _o)
{
  CosNotifyComm::NotifySubscribe_ptr _no = CosNotifyComm::NotifySubscribe::_duplicate(_o);
  _a.PR_insert(CosNotifyComm::_tc_NotifySubscribe,
               _0RL_CosNotifyComm_mNotifySubscribe_marshal_fn,
               _0RL_CosNotifyComm_mNotifySubscribe_destructor_fn,
               _no->_PR_getobj());
}
void operator<<=(::CORBA::Any& _a, CosNotifyComm::NotifySubscribe_ptr* _op)
{
  _a.PR_insert(CosNotifyComm::_tc_NotifySubscribe,
               _0RL_CosNotifyComm_mNotifySubscribe_marshal_fn,
               _0RL_CosNotifyComm_mNotifySubscribe_destructor_fn,
               (*_op)->_PR_getobj());
  *_op = CosNotifyComm::NotifySubscribe::_nil();
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, CosNotifyComm::NotifySubscribe_ptr& _o)
{
  void* _v;
  if (_a.PR_extract(CosNotifyComm::_tc_NotifySubscribe,
                    _0RL_CosNotifyComm_mNotifySubscribe_unmarshal_fn,
                    _0RL_CosNotifyComm_mNotifySubscribe_marshal_fn,
                    _0RL_CosNotifyComm_mNotifySubscribe_destructor_fn,
                    _v)) {
    omniObjRef* _r = (omniObjRef*)_v;
    if (_r)
      _o = (CosNotifyComm::NotifySubscribe_ptr)_r->_ptrToObjRef(CosNotifyComm::NotifySubscribe::_PD_repoId);
    else
      _o = CosNotifyComm::NotifySubscribe::_nil();
    return 1;
  }
  return 0;
}

static void _0RL_CosNotifyComm_mPushConsumer_marshal_fn(cdrStream& _s, void* _v)
{
  omniObjRef* _o = (omniObjRef*)_v;
  omniObjRef::_marshal(_o, _s);
}
static void _0RL_CosNotifyComm_mPushConsumer_unmarshal_fn(cdrStream& _s, void*& _v)
{
  omniObjRef* _o = omniObjRef::_unMarshal(CosNotifyComm::PushConsumer::_PD_repoId, _s);
  _v = _o;
}
static void _0RL_CosNotifyComm_mPushConsumer_destructor_fn(void* _v)
{
  omniObjRef* _o = (omniObjRef*)_v;
  if (_o)
    omni::releaseObjRef(_o);
}

void operator<<=(::CORBA::Any& _a, CosNotifyComm::PushConsumer_ptr _o)
{
  CosNotifyComm::PushConsumer_ptr _no = CosNotifyComm::PushConsumer::_duplicate(_o);
  _a.PR_insert(CosNotifyComm::_tc_PushConsumer,
               _0RL_CosNotifyComm_mPushConsumer_marshal_fn,
               _0RL_CosNotifyComm_mPushConsumer_destructor_fn,
               _no->_PR_getobj());
}
void operator<<=(::CORBA::Any& _a, CosNotifyComm::PushConsumer_ptr* _op)
{
  _a.PR_insert(CosNotifyComm::_tc_PushConsumer,
               _0RL_CosNotifyComm_mPushConsumer_marshal_fn,
               _0RL_CosNotifyComm_mPushConsumer_destructor_fn,
               (*_op)->_PR_getobj());
  *_op = CosNotifyComm::PushConsumer::_nil();
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, CosNotifyComm::PushConsumer_ptr& _o)
{
  void* _v;
  if (_a.PR_extract(CosNotifyComm::_tc_PushConsumer,
                    _0RL_CosNotifyComm_mPushConsumer_unmarshal_fn,
                    _0RL_CosNotifyComm_mPushConsumer_marshal_fn,
                    _0RL_CosNotifyComm_mPushConsumer_destructor_fn,
                    _v)) {
    omniObjRef* _r = (omniObjRef*)_v;
    if (_r)
      _o = (CosNotifyComm::PushConsumer_ptr)_r->_ptrToObjRef(CosNotifyComm::PushConsumer::_PD_repoId);
    else
      _o = CosNotifyComm::PushConsumer::_nil();
    return 1;
  }
  return 0;
}

static void _0RL_CosNotifyComm_mPullConsumer_marshal_fn(cdrStream& _s, void* _v)
{
  omniObjRef* _o = (omniObjRef*)_v;
  omniObjRef::_marshal(_o, _s);
}
static void _0RL_CosNotifyComm_mPullConsumer_unmarshal_fn(cdrStream& _s, void*& _v)
{
  omniObjRef* _o = omniObjRef::_unMarshal(CosNotifyComm::PullConsumer::_PD_repoId, _s);
  _v = _o;
}
static void _0RL_CosNotifyComm_mPullConsumer_destructor_fn(void* _v)
{
  omniObjRef* _o = (omniObjRef*)_v;
  if (_o)
    omni::releaseObjRef(_o);
}

void operator<<=(::CORBA::Any& _a, CosNotifyComm::PullConsumer_ptr _o)
{
  CosNotifyComm::PullConsumer_ptr _no = CosNotifyComm::PullConsumer::_duplicate(_o);
  _a.PR_insert(CosNotifyComm::_tc_PullConsumer,
               _0RL_CosNotifyComm_mPullConsumer_marshal_fn,
               _0RL_CosNotifyComm_mPullConsumer_destructor_fn,
               _no->_PR_getobj());
}
void operator<<=(::CORBA::Any& _a, CosNotifyComm::PullConsumer_ptr* _op)
{
  _a.PR_insert(CosNotifyComm::_tc_PullConsumer,
               _0RL_CosNotifyComm_mPullConsumer_marshal_fn,
               _0RL_CosNotifyComm_mPullConsumer_destructor_fn,
               (*_op)->_PR_getobj());
  *_op = CosNotifyComm::PullConsumer::_nil();
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, CosNotifyComm::PullConsumer_ptr& _o)
{
  void* _v;
  if (_a.PR_extract(CosNotifyComm::_tc_PullConsumer,
                    _0RL_CosNotifyComm_mPullConsumer_unmarshal_fn,
                    _0RL_CosNotifyComm_mPullConsumer_marshal_fn,
                    _0RL_CosNotifyComm_mPullConsumer_destructor_fn,
                    _v)) {
    omniObjRef* _r = (omniObjRef*)_v;
    if (_r)
      _o = (CosNotifyComm::PullConsumer_ptr)_r->_ptrToObjRef(CosNotifyComm::PullConsumer::_PD_repoId);
    else
      _o = CosNotifyComm::PullConsumer::_nil();
    return 1;
  }
  return 0;
}

static void _0RL_CosNotifyComm_mPullSupplier_marshal_fn(cdrStream& _s, void* _v)
{
  omniObjRef* _o = (omniObjRef*)_v;
  omniObjRef::_marshal(_o, _s);
}
static void _0RL_CosNotifyComm_mPullSupplier_unmarshal_fn(cdrStream& _s, void*& _v)
{
  omniObjRef* _o = omniObjRef::_unMarshal(CosNotifyComm::PullSupplier::_PD_repoId, _s);
  _v = _o;
}
static void _0RL_CosNotifyComm_mPullSupplier_destructor_fn(void* _v)
{
  omniObjRef* _o = (omniObjRef*)_v;
  if (_o)
    omni::releaseObjRef(_o);
}

void operator<<=(::CORBA::Any& _a, CosNotifyComm::PullSupplier_ptr _o)
{
  CosNotifyComm::PullSupplier_ptr _no = CosNotifyComm::PullSupplier::_duplicate(_o);
  _a.PR_insert(CosNotifyComm::_tc_PullSupplier,
               _0RL_CosNotifyComm_mPullSupplier_marshal_fn,
               _0RL_CosNotifyComm_mPullSupplier_destructor_fn,
               _no->_PR_getobj());
}
void operator<<=(::CORBA::Any& _a, CosNotifyComm::PullSupplier_ptr* _op)
{
  _a.PR_insert(CosNotifyComm::_tc_PullSupplier,
               _0RL_CosNotifyComm_mPullSupplier_marshal_fn,
               _0RL_CosNotifyComm_mPullSupplier_destructor_fn,
               (*_op)->_PR_getobj());
  *_op = CosNotifyComm::PullSupplier::_nil();
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, CosNotifyComm::PullSupplier_ptr& _o)
{
  void* _v;
  if (_a.PR_extract(CosNotifyComm::_tc_PullSupplier,
                    _0RL_CosNotifyComm_mPullSupplier_unmarshal_fn,
                    _0RL_CosNotifyComm_mPullSupplier_marshal_fn,
                    _0RL_CosNotifyComm_mPullSupplier_destructor_fn,
                    _v)) {
    omniObjRef* _r = (omniObjRef*)_v;
    if (_r)
      _o = (CosNotifyComm::PullSupplier_ptr)_r->_ptrToObjRef(CosNotifyComm::PullSupplier::_PD_repoId);
    else
      _o = CosNotifyComm::PullSupplier::_nil();
    return 1;
  }
  return 0;
}

static void _0RL_CosNotifyComm_mPushSupplier_marshal_fn(cdrStream& _s, void* _v)
{
  omniObjRef* _o = (omniObjRef*)_v;
  omniObjRef::_marshal(_o, _s);
}
static void _0RL_CosNotifyComm_mPushSupplier_unmarshal_fn(cdrStream& _s, void*& _v)
{
  omniObjRef* _o = omniObjRef::_unMarshal(CosNotifyComm::PushSupplier::_PD_repoId, _s);
  _v = _o;
}
static void _0RL_CosNotifyComm_mPushSupplier_destructor_fn(void* _v)
{
  omniObjRef* _o = (omniObjRef*)_v;
  if (_o)
    omni::releaseObjRef(_o);
}

void operator<<=(::CORBA::Any& _a, CosNotifyComm::PushSupplier_ptr _o)
{
  CosNotifyComm::PushSupplier_ptr _no = CosNotifyComm::PushSupplier::_duplicate(_o);
  _a.PR_insert(CosNotifyComm::_tc_PushSupplier,
               _0RL_CosNotifyComm_mPushSupplier_marshal_fn,
               _0RL_CosNotifyComm_mPushSupplier_destructor_fn,
               _no->_PR_getobj());
}
void operator<<=(::CORBA::Any& _a, CosNotifyComm::PushSupplier_ptr* _op)
{
  _a.PR_insert(CosNotifyComm::_tc_PushSupplier,
               _0RL_CosNotifyComm_mPushSupplier_marshal_fn,
               _0RL_CosNotifyComm_mPushSupplier_destructor_fn,
               (*_op)->_PR_getobj());
  *_op = CosNotifyComm::PushSupplier::_nil();
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, CosNotifyComm::PushSupplier_ptr& _o)
{
  void* _v;
  if (_a.PR_extract(CosNotifyComm::_tc_PushSupplier,
                    _0RL_CosNotifyComm_mPushSupplier_unmarshal_fn,
                    _0RL_CosNotifyComm_mPushSupplier_marshal_fn,
                    _0RL_CosNotifyComm_mPushSupplier_destructor_fn,
                    _v)) {
    omniObjRef* _r = (omniObjRef*)_v;
    if (_r)
      _o = (CosNotifyComm::PushSupplier_ptr)_r->_ptrToObjRef(CosNotifyComm::PushSupplier::_PD_repoId);
    else
      _o = CosNotifyComm::PushSupplier::_nil();
    return 1;
  }
  return 0;
}

static void _0RL_CosNotifyComm_mStructuredPushConsumer_marshal_fn(cdrStream& _s, void* _v)
{
  omniObjRef* _o = (omniObjRef*)_v;
  omniObjRef::_marshal(_o, _s);
}
static void _0RL_CosNotifyComm_mStructuredPushConsumer_unmarshal_fn(cdrStream& _s, void*& _v)
{
  omniObjRef* _o = omniObjRef::_unMarshal(CosNotifyComm::StructuredPushConsumer::_PD_repoId, _s);
  _v = _o;
}
static void _0RL_CosNotifyComm_mStructuredPushConsumer_destructor_fn(void* _v)
{
  omniObjRef* _o = (omniObjRef*)_v;
  if (_o)
    omni::releaseObjRef(_o);
}

void operator<<=(::CORBA::Any& _a, CosNotifyComm::StructuredPushConsumer_ptr _o)
{
  CosNotifyComm::StructuredPushConsumer_ptr _no = CosNotifyComm::StructuredPushConsumer::_duplicate(_o);
  _a.PR_insert(CosNotifyComm::_tc_StructuredPushConsumer,
               _0RL_CosNotifyComm_mStructuredPushConsumer_marshal_fn,
               _0RL_CosNotifyComm_mStructuredPushConsumer_destructor_fn,
               _no->_PR_getobj());
}
void operator<<=(::CORBA::Any& _a, CosNotifyComm::StructuredPushConsumer_ptr* _op)
{
  _a.PR_insert(CosNotifyComm::_tc_StructuredPushConsumer,
               _0RL_CosNotifyComm_mStructuredPushConsumer_marshal_fn,
               _0RL_CosNotifyComm_mStructuredPushConsumer_destructor_fn,
               (*_op)->_PR_getobj());
  *_op = CosNotifyComm::StructuredPushConsumer::_nil();
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, CosNotifyComm::StructuredPushConsumer_ptr& _o)
{
  void* _v;
  if (_a.PR_extract(CosNotifyComm::_tc_StructuredPushConsumer,
                    _0RL_CosNotifyComm_mStructuredPushConsumer_unmarshal_fn,
                    _0RL_CosNotifyComm_mStructuredPushConsumer_marshal_fn,
                    _0RL_CosNotifyComm_mStructuredPushConsumer_destructor_fn,
                    _v)) {
    omniObjRef* _r = (omniObjRef*)_v;
    if (_r)
      _o = (CosNotifyComm::StructuredPushConsumer_ptr)_r->_ptrToObjRef(CosNotifyComm::StructuredPushConsumer::_PD_repoId);
    else
      _o = CosNotifyComm::StructuredPushConsumer::_nil();
    return 1;
  }
  return 0;
}

static void _0RL_CosNotifyComm_mStructuredPullConsumer_marshal_fn(cdrStream& _s, void* _v)
{
  omniObjRef* _o = (omniObjRef*)_v;
  omniObjRef::_marshal(_o, _s);
}
static void _0RL_CosNotifyComm_mStructuredPullConsumer_unmarshal_fn(cdrStream& _s, void*& _v)
{
  omniObjRef* _o = omniObjRef::_unMarshal(CosNotifyComm::StructuredPullConsumer::_PD_repoId, _s);
  _v = _o;
}
static void _0RL_CosNotifyComm_mStructuredPullConsumer_destructor_fn(void* _v)
{
  omniObjRef* _o = (omniObjRef*)_v;
  if (_o)
    omni::releaseObjRef(_o);
}

void operator<<=(::CORBA::Any& _a, CosNotifyComm::StructuredPullConsumer_ptr _o)
{
  CosNotifyComm::StructuredPullConsumer_ptr _no = CosNotifyComm::StructuredPullConsumer::_duplicate(_o);
  _a.PR_insert(CosNotifyComm::_tc_StructuredPullConsumer,
               _0RL_CosNotifyComm_mStructuredPullConsumer_marshal_fn,
               _0RL_CosNotifyComm_mStructuredPullConsumer_destructor_fn,
               _no->_PR_getobj());
}
void operator<<=(::CORBA::Any& _a, CosNotifyComm::StructuredPullConsumer_ptr* _op)
{
  _a.PR_insert(CosNotifyComm::_tc_StructuredPullConsumer,
               _0RL_CosNotifyComm_mStructuredPullConsumer_marshal_fn,
               _0RL_CosNotifyComm_mStructuredPullConsumer_destructor_fn,
               (*_op)->_PR_getobj());
  *_op = CosNotifyComm::StructuredPullConsumer::_nil();
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, CosNotifyComm::StructuredPullConsumer_ptr& _o)
{
  void* _v;
  if (_a.PR_extract(CosNotifyComm::_tc_StructuredPullConsumer,
                    _0RL_CosNotifyComm_mStructuredPullConsumer_unmarshal_fn,
                    _0RL_CosNotifyComm_mStructuredPullConsumer_marshal_fn,
                    _0RL_CosNotifyComm_mStructuredPullConsumer_destructor_fn,
                    _v)) {
    omniObjRef* _r = (omniObjRef*)_v;
    if (_r)
      _o = (CosNotifyComm::StructuredPullConsumer_ptr)_r->_ptrToObjRef(CosNotifyComm::StructuredPullConsumer::_PD_repoId);
    else
      _o = CosNotifyComm::StructuredPullConsumer::_nil();
    return 1;
  }
  return 0;
}

static void _0RL_CosNotifyComm_mStructuredPullSupplier_marshal_fn(cdrStream& _s, void* _v)
{
  omniObjRef* _o = (omniObjRef*)_v;
  omniObjRef::_marshal(_o, _s);
}
static void _0RL_CosNotifyComm_mStructuredPullSupplier_unmarshal_fn(cdrStream& _s, void*& _v)
{
  omniObjRef* _o = omniObjRef::_unMarshal(CosNotifyComm::StructuredPullSupplier::_PD_repoId, _s);
  _v = _o;
}
static void _0RL_CosNotifyComm_mStructuredPullSupplier_destructor_fn(void* _v)
{
  omniObjRef* _o = (omniObjRef*)_v;
  if (_o)
    omni::releaseObjRef(_o);
}

void operator<<=(::CORBA::Any& _a, CosNotifyComm::StructuredPullSupplier_ptr _o)
{
  CosNotifyComm::StructuredPullSupplier_ptr _no = CosNotifyComm::StructuredPullSupplier::_duplicate(_o);
  _a.PR_insert(CosNotifyComm::_tc_StructuredPullSupplier,
               _0RL_CosNotifyComm_mStructuredPullSupplier_marshal_fn,
               _0RL_CosNotifyComm_mStructuredPullSupplier_destructor_fn,
               _no->_PR_getobj());
}
void operator<<=(::CORBA::Any& _a, CosNotifyComm::StructuredPullSupplier_ptr* _op)
{
  _a.PR_insert(CosNotifyComm::_tc_StructuredPullSupplier,
               _0RL_CosNotifyComm_mStructuredPullSupplier_marshal_fn,
               _0RL_CosNotifyComm_mStructuredPullSupplier_destructor_fn,
               (*_op)->_PR_getobj());
  *_op = CosNotifyComm::StructuredPullSupplier::_nil();
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, CosNotifyComm::StructuredPullSupplier_ptr& _o)
{
  void* _v;
  if (_a.PR_extract(CosNotifyComm::_tc_StructuredPullSupplier,
                    _0RL_CosNotifyComm_mStructuredPullSupplier_unmarshal_fn,
                    _0RL_CosNotifyComm_mStructuredPullSupplier_marshal_fn,
                    _0RL_CosNotifyComm_mStructuredPullSupplier_destructor_fn,
                    _v)) {
    omniObjRef* _r = (omniObjRef*)_v;
    if (_r)
      _o = (CosNotifyComm::StructuredPullSupplier_ptr)_r->_ptrToObjRef(CosNotifyComm::StructuredPullSupplier::_PD_repoId);
    else
      _o = CosNotifyComm::StructuredPullSupplier::_nil();
    return 1;
  }
  return 0;
}

static void _0RL_CosNotifyComm_mStructuredPushSupplier_marshal_fn(cdrStream& _s, void* _v)
{
  omniObjRef* _o = (omniObjRef*)_v;
  omniObjRef::_marshal(_o, _s);
}
static void _0RL_CosNotifyComm_mStructuredPushSupplier_unmarshal_fn(cdrStream& _s, void*& _v)
{
  omniObjRef* _o = omniObjRef::_unMarshal(CosNotifyComm::StructuredPushSupplier::_PD_repoId, _s);
  _v = _o;
}
static void _0RL_CosNotifyComm_mStructuredPushSupplier_destructor_fn(void* _v)
{
  omniObjRef* _o = (omniObjRef*)_v;
  if (_o)
    omni::releaseObjRef(_o);
}

void operator<<=(::CORBA::Any& _a, CosNotifyComm::StructuredPushSupplier_ptr _o)
{
  CosNotifyComm::StructuredPushSupplier_ptr _no = CosNotifyComm::StructuredPushSupplier::_duplicate(_o);
  _a.PR_insert(CosNotifyComm::_tc_StructuredPushSupplier,
               _0RL_CosNotifyComm_mStructuredPushSupplier_marshal_fn,
               _0RL_CosNotifyComm_mStructuredPushSupplier_destructor_fn,
               _no->_PR_getobj());
}
void operator<<=(::CORBA::Any& _a, CosNotifyComm::StructuredPushSupplier_ptr* _op)
{
  _a.PR_insert(CosNotifyComm::_tc_StructuredPushSupplier,
               _0RL_CosNotifyComm_mStructuredPushSupplier_marshal_fn,
               _0RL_CosNotifyComm_mStructuredPushSupplier_destructor_fn,
               (*_op)->_PR_getobj());
  *_op = CosNotifyComm::StructuredPushSupplier::_nil();
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, CosNotifyComm::StructuredPushSupplier_ptr& _o)
{
  void* _v;
  if (_a.PR_extract(CosNotifyComm::_tc_StructuredPushSupplier,
                    _0RL_CosNotifyComm_mStructuredPushSupplier_unmarshal_fn,
                    _0RL_CosNotifyComm_mStructuredPushSupplier_marshal_fn,
                    _0RL_CosNotifyComm_mStructuredPushSupplier_destructor_fn,
                    _v)) {
    omniObjRef* _r = (omniObjRef*)_v;
    if (_r)
      _o = (CosNotifyComm::StructuredPushSupplier_ptr)_r->_ptrToObjRef(CosNotifyComm::StructuredPushSupplier::_PD_repoId);
    else
      _o = CosNotifyComm::StructuredPushSupplier::_nil();
    return 1;
  }
  return 0;
}

static void _0RL_CosNotifyComm_mSequencePushConsumer_marshal_fn(cdrStream& _s, void* _v)
{
  omniObjRef* _o = (omniObjRef*)_v;
  omniObjRef::_marshal(_o, _s);
}
static void _0RL_CosNotifyComm_mSequencePushConsumer_unmarshal_fn(cdrStream& _s, void*& _v)
{
  omniObjRef* _o = omniObjRef::_unMarshal(CosNotifyComm::SequencePushConsumer::_PD_repoId, _s);
  _v = _o;
}
static void _0RL_CosNotifyComm_mSequencePushConsumer_destructor_fn(void* _v)
{
  omniObjRef* _o = (omniObjRef*)_v;
  if (_o)
    omni::releaseObjRef(_o);
}

void operator<<=(::CORBA::Any& _a, CosNotifyComm::SequencePushConsumer_ptr _o)
{
  CosNotifyComm::SequencePushConsumer_ptr _no = CosNotifyComm::SequencePushConsumer::_duplicate(_o);
  _a.PR_insert(CosNotifyComm::_tc_SequencePushConsumer,
               _0RL_CosNotifyComm_mSequencePushConsumer_marshal_fn,
               _0RL_CosNotifyComm_mSequencePushConsumer_destructor_fn,
               _no->_PR_getobj());
}
void operator<<=(::CORBA::Any& _a, CosNotifyComm::SequencePushConsumer_ptr* _op)
{
  _a.PR_insert(CosNotifyComm::_tc_SequencePushConsumer,
               _0RL_CosNotifyComm_mSequencePushConsumer_marshal_fn,
               _0RL_CosNotifyComm_mSequencePushConsumer_destructor_fn,
               (*_op)->_PR_getobj());
  *_op = CosNotifyComm::SequencePushConsumer::_nil();
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, CosNotifyComm::SequencePushConsumer_ptr& _o)
{
  void* _v;
  if (_a.PR_extract(CosNotifyComm::_tc_SequencePushConsumer,
                    _0RL_CosNotifyComm_mSequencePushConsumer_unmarshal_fn,
                    _0RL_CosNotifyComm_mSequencePushConsumer_marshal_fn,
                    _0RL_CosNotifyComm_mSequencePushConsumer_destructor_fn,
                    _v)) {
    omniObjRef* _r = (omniObjRef*)_v;
    if (_r)
      _o = (CosNotifyComm::SequencePushConsumer_ptr)_r->_ptrToObjRef(CosNotifyComm::SequencePushConsumer::_PD_repoId);
    else
      _o = CosNotifyComm::SequencePushConsumer::_nil();
    return 1;
  }
  return 0;
}

static void _0RL_CosNotifyComm_mSequencePullConsumer_marshal_fn(cdrStream& _s, void* _v)
{
  omniObjRef* _o = (omniObjRef*)_v;
  omniObjRef::_marshal(_o, _s);
}
static void _0RL_CosNotifyComm_mSequencePullConsumer_unmarshal_fn(cdrStream& _s, void*& _v)
{
  omniObjRef* _o = omniObjRef::_unMarshal(CosNotifyComm::SequencePullConsumer::_PD_repoId, _s);
  _v = _o;
}
static void _0RL_CosNotifyComm_mSequencePullConsumer_destructor_fn(void* _v)
{
  omniObjRef* _o = (omniObjRef*)_v;
  if (_o)
    omni::releaseObjRef(_o);
}

void operator<<=(::CORBA::Any& _a, CosNotifyComm::SequencePullConsumer_ptr _o)
{
  CosNotifyComm::SequencePullConsumer_ptr _no = CosNotifyComm::SequencePullConsumer::_duplicate(_o);
  _a.PR_insert(CosNotifyComm::_tc_SequencePullConsumer,
               _0RL_CosNotifyComm_mSequencePullConsumer_marshal_fn,
               _0RL_CosNotifyComm_mSequencePullConsumer_destructor_fn,
               _no->_PR_getobj());
}
void operator<<=(::CORBA::Any& _a, CosNotifyComm::SequencePullConsumer_ptr* _op)
{
  _a.PR_insert(CosNotifyComm::_tc_SequencePullConsumer,
               _0RL_CosNotifyComm_mSequencePullConsumer_marshal_fn,
               _0RL_CosNotifyComm_mSequencePullConsumer_destructor_fn,
               (*_op)->_PR_getobj());
  *_op = CosNotifyComm::SequencePullConsumer::_nil();
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, CosNotifyComm::SequencePullConsumer_ptr& _o)
{
  void* _v;
  if (_a.PR_extract(CosNotifyComm::_tc_SequencePullConsumer,
                    _0RL_CosNotifyComm_mSequencePullConsumer_unmarshal_fn,
                    _0RL_CosNotifyComm_mSequencePullConsumer_marshal_fn,
                    _0RL_CosNotifyComm_mSequencePullConsumer_destructor_fn,
                    _v)) {
    omniObjRef* _r = (omniObjRef*)_v;
    if (_r)
      _o = (CosNotifyComm::SequencePullConsumer_ptr)_r->_ptrToObjRef(CosNotifyComm::SequencePullConsumer::_PD_repoId);
    else
      _o = CosNotifyComm::SequencePullConsumer::_nil();
    return 1;
  }
  return 0;
}

static void _0RL_CosNotifyComm_mSequencePullSupplier_marshal_fn(cdrStream& _s, void* _v)
{
  omniObjRef* _o = (omniObjRef*)_v;
  omniObjRef::_marshal(_o, _s);
}
static void _0RL_CosNotifyComm_mSequencePullSupplier_unmarshal_fn(cdrStream& _s, void*& _v)
{
  omniObjRef* _o = omniObjRef::_unMarshal(CosNotifyComm::SequencePullSupplier::_PD_repoId, _s);
  _v = _o;
}
static void _0RL_CosNotifyComm_mSequencePullSupplier_destructor_fn(void* _v)
{
  omniObjRef* _o = (omniObjRef*)_v;
  if (_o)
    omni::releaseObjRef(_o);
}

void operator<<=(::CORBA::Any& _a, CosNotifyComm::SequencePullSupplier_ptr _o)
{
  CosNotifyComm::SequencePullSupplier_ptr _no = CosNotifyComm::SequencePullSupplier::_duplicate(_o);
  _a.PR_insert(CosNotifyComm::_tc_SequencePullSupplier,
               _0RL_CosNotifyComm_mSequencePullSupplier_marshal_fn,
               _0RL_CosNotifyComm_mSequencePullSupplier_destructor_fn,
               _no->_PR_getobj());
}
void operator<<=(::CORBA::Any& _a, CosNotifyComm::SequencePullSupplier_ptr* _op)
{
  _a.PR_insert(CosNotifyComm::_tc_SequencePullSupplier,
               _0RL_CosNotifyComm_mSequencePullSupplier_marshal_fn,
               _0RL_CosNotifyComm_mSequencePullSupplier_destructor_fn,
               (*_op)->_PR_getobj());
  *_op = CosNotifyComm::SequencePullSupplier::_nil();
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, CosNotifyComm::SequencePullSupplier_ptr& _o)
{
  void* _v;
  if (_a.PR_extract(CosNotifyComm::_tc_SequencePullSupplier,
                    _0RL_CosNotifyComm_mSequencePullSupplier_unmarshal_fn,
                    _0RL_CosNotifyComm_mSequencePullSupplier_marshal_fn,
                    _0RL_CosNotifyComm_mSequencePullSupplier_destructor_fn,
                    _v)) {
    omniObjRef* _r = (omniObjRef*)_v;
    if (_r)
      _o = (CosNotifyComm::SequencePullSupplier_ptr)_r->_ptrToObjRef(CosNotifyComm::SequencePullSupplier::_PD_repoId);
    else
      _o = CosNotifyComm::SequencePullSupplier::_nil();
    return 1;
  }
  return 0;
}

static void _0RL_CosNotifyComm_mSequencePushSupplier_marshal_fn(cdrStream& _s, void* _v)
{
  omniObjRef* _o = (omniObjRef*)_v;
  omniObjRef::_marshal(_o, _s);
}
static void _0RL_CosNotifyComm_mSequencePushSupplier_unmarshal_fn(cdrStream& _s, void*& _v)
{
  omniObjRef* _o = omniObjRef::_unMarshal(CosNotifyComm::SequencePushSupplier::_PD_repoId, _s);
  _v = _o;
}
static void _0RL_CosNotifyComm_mSequencePushSupplier_destructor_fn(void* _v)
{
  omniObjRef* _o = (omniObjRef*)_v;
  if (_o)
    omni::releaseObjRef(_o);
}

void operator<<=(::CORBA::Any& _a, CosNotifyComm::SequencePushSupplier_ptr _o)
{
  CosNotifyComm::SequencePushSupplier_ptr _no = CosNotifyComm::SequencePushSupplier::_duplicate(_o);
  _a.PR_insert(CosNotifyComm::_tc_SequencePushSupplier,
               _0RL_CosNotifyComm_mSequencePushSupplier_marshal_fn,
               _0RL_CosNotifyComm_mSequencePushSupplier_destructor_fn,
               _no->_PR_getobj());
}
void operator<<=(::CORBA::Any& _a, CosNotifyComm::SequencePushSupplier_ptr* _op)
{
  _a.PR_insert(CosNotifyComm::_tc_SequencePushSupplier,
               _0RL_CosNotifyComm_mSequencePushSupplier_marshal_fn,
               _0RL_CosNotifyComm_mSequencePushSupplier_destructor_fn,
               (*_op)->_PR_getobj());
  *_op = CosNotifyComm::SequencePushSupplier::_nil();
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, CosNotifyComm::SequencePushSupplier_ptr& _o)
{
  void* _v;
  if (_a.PR_extract(CosNotifyComm::_tc_SequencePushSupplier,
                    _0RL_CosNotifyComm_mSequencePushSupplier_unmarshal_fn,
                    _0RL_CosNotifyComm_mSequencePushSupplier_marshal_fn,
                    _0RL_CosNotifyComm_mSequencePushSupplier_destructor_fn,
                    _v)) {
    omniObjRef* _r = (omniObjRef*)_v;
    if (_r)
      _o = (CosNotifyComm::SequencePushSupplier_ptr)_r->_ptrToObjRef(CosNotifyComm::SequencePushSupplier::_PD_repoId);
    else
      _o = CosNotifyComm::SequencePushSupplier::_nil();
    return 1;
  }
  return 0;
}

