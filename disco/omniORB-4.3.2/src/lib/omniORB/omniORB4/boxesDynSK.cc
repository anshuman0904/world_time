// This file is generated by omniidl (C++ backend) - omniORB_4_3. Do not edit.

static ::CORBA::TypeCode::_Tracker _0RL_tcTrack(__FILE__);

static CORBA::TypeCode_ptr _0RL_tc_CORBA_mStringValue = CORBA::TypeCode::PR_value_box_tc("IDL:omg.org/CORBA/StringValue:1.0", "StringValue", CORBA::TypeCode::PR_string_tc(0, &_0RL_tcTrack), &_0RL_tcTrack);


#if defined(OMNI_HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace CORBA { 
  const ::CORBA::TypeCode_ptr _tc_StringValue = _0RL_tc_CORBA_mStringValue;
} 
#else
const ::CORBA::TypeCode_ptr CORBA::_tc_StringValue = _0RL_tc_CORBA_mStringValue;
#endif

static CORBA::TypeCode_ptr _0RL_tc_CORBA_mWStringValue = CORBA::TypeCode::PR_value_box_tc("IDL:omg.org/CORBA/WStringValue:1.0", "WStringValue", CORBA::TypeCode::PR_wstring_tc(0, &_0RL_tcTrack), &_0RL_tcTrack);


#if defined(OMNI_HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace CORBA { 
  const ::CORBA::TypeCode_ptr _tc_WStringValue = _0RL_tc_CORBA_mWStringValue;
} 
#else
const ::CORBA::TypeCode_ptr CORBA::_tc_WStringValue = _0RL_tc_CORBA_mWStringValue;
#endif

static void _0RL_CORBA_mStringValue_marshal_fn(cdrStream& _s, void* _v)
{
  CORBA::StringValue* _p = (CORBA::StringValue*)_v;
  CORBA::StringValue::_NP_marshal(_p, _s);
}
static void _0RL_CORBA_mStringValue_unmarshal_fn(cdrStream& _s, void*& _v)
{
  CORBA::StringValue* _p = CORBA::StringValue::_NP_unmarshal(_s);
  _v = _p;
}
static void _0RL_CORBA_mStringValue_destructor_fn(void* _v)
{
  CORBA::StringValue* _p = (CORBA::StringValue*)_v;
  ::CORBA::remove_ref(_p);
}

void operator<<=(::CORBA::Any& _a, CORBA::StringValue* _v)
{
  ::CORBA::add_ref(_v);
  _a.PR_insert(_0RL_tc_CORBA_mStringValue,
               _0RL_CORBA_mStringValue_marshal_fn,
               _0RL_CORBA_mStringValue_destructor_fn,
               _v);
}
void operator<<=(::CORBA::Any& _a, CORBA::StringValue** _vp)
{
  _a.PR_insert(_0RL_tc_CORBA_mStringValue,
               _0RL_CORBA_mStringValue_marshal_fn,
               _0RL_CORBA_mStringValue_destructor_fn,
               *_vp);
  *_vp = 0;
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, CORBA::StringValue*& _sp)
{
  void* _v;
  if (_a.PR_extract(_0RL_tc_CORBA_mStringValue,
                    _0RL_CORBA_mStringValue_unmarshal_fn,
                    _0RL_CORBA_mStringValue_marshal_fn,
                    _0RL_CORBA_mStringValue_destructor_fn,
                    _v)) {
    _sp = (CORBA::StringValue*)_v;
    return 1;
  }
  return 0;
}

static void _0RL_CORBA_mWStringValue_marshal_fn(cdrStream& _s, void* _v)
{
  CORBA::WStringValue* _p = (CORBA::WStringValue*)_v;
  CORBA::WStringValue::_NP_marshal(_p, _s);
}
static void _0RL_CORBA_mWStringValue_unmarshal_fn(cdrStream& _s, void*& _v)
{
  CORBA::WStringValue* _p = CORBA::WStringValue::_NP_unmarshal(_s);
  _v = _p;
}
static void _0RL_CORBA_mWStringValue_destructor_fn(void* _v)
{
  CORBA::WStringValue* _p = (CORBA::WStringValue*)_v;
  ::CORBA::remove_ref(_p);
}

void operator<<=(::CORBA::Any& _a, CORBA::WStringValue* _v)
{
  ::CORBA::add_ref(_v);
  _a.PR_insert(_0RL_tc_CORBA_mWStringValue,
               _0RL_CORBA_mWStringValue_marshal_fn,
               _0RL_CORBA_mWStringValue_destructor_fn,
               _v);
}
void operator<<=(::CORBA::Any& _a, CORBA::WStringValue** _vp)
{
  _a.PR_insert(_0RL_tc_CORBA_mWStringValue,
               _0RL_CORBA_mWStringValue_marshal_fn,
               _0RL_CORBA_mWStringValue_destructor_fn,
               *_vp);
  *_vp = 0;
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, CORBA::WStringValue*& _sp)
{
  void* _v;
  if (_a.PR_extract(_0RL_tc_CORBA_mWStringValue,
                    _0RL_CORBA_mWStringValue_unmarshal_fn,
                    _0RL_CORBA_mWStringValue_marshal_fn,
                    _0RL_CORBA_mWStringValue_destructor_fn,
                    _v)) {
    _sp = (CORBA::WStringValue*)_v;
    return 1;
  }
  return 0;
}

