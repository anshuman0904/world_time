// This file is generated by omniidl (C++ backend) - omniORB_4_3. Do not edit.

#include "example.hh"
#include <omniORB4/IOP_S.h>
#include <omniORB4/IOP_C.h>
#include <omniORB4/callDescriptor.h>
#include <omniORB4/callHandle.h>
#include <omniORB4/objTracker.h>


OMNI_USING_NAMESPACE(omni)

OMNI_MAYBE_UNUSED static const char* _0RL_library_version = omniORB_4_3;



Example::Hello_ptr Example::Hello_Helper::_nil() {
  return ::Example::Hello::_nil();
}

::CORBA::Boolean Example::Hello_Helper::is_nil(::Example::Hello_ptr p) {
  return ::CORBA::is_nil(p);

}

void Example::Hello_Helper::release(::Example::Hello_ptr p) {
  ::CORBA::release(p);
}

void Example::Hello_Helper::marshalObjRef(::Example::Hello_ptr obj, cdrStream& s) {
  ::Example::Hello::_marshalObjRef(obj, s);
}

Example::Hello_ptr Example::Hello_Helper::unmarshalObjRef(cdrStream& s) {
  return ::Example::Hello::_unmarshalObjRef(s);
}

void Example::Hello_Helper::duplicate(::Example::Hello_ptr obj) {
  if (obj && !obj->_NP_is_nil())  omni::duplicateObjRef(obj);
}

Example::Hello_ptr
Example::Hello::_duplicate(::Example::Hello_ptr obj)
{
  if (obj && !obj->_NP_is_nil())  omni::duplicateObjRef(obj);
  return obj;
}

Example::Hello_ptr
Example::Hello::_narrow(::CORBA::Object_ptr obj)
{
  if (!obj || obj->_NP_is_nil() || obj->_NP_is_pseudo()) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_realNarrow(_PD_repoId);
  return e ? e : _nil();
}


Example::Hello_ptr
Example::Hello::_unchecked_narrow(::CORBA::Object_ptr obj)
{
  if (!obj || obj->_NP_is_nil() || obj->_NP_is_pseudo()) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_uncheckedNarrow(_PD_repoId);
  return e ? e : _nil();
}

Example::Hello_ptr
Example::Hello::_nil()
{
#ifdef OMNI_UNLOADABLE_STUBS
  static _objref_Hello _the_nil_obj;
  return &_the_nil_obj;
#else
  static _objref_Hello* _the_nil_ptr = 0;
  if (!_the_nil_ptr) {
    omni::nilRefLock().lock();
    if (!_the_nil_ptr) {
      _the_nil_ptr = new _objref_Hello;
      registerNilCorbaObject(_the_nil_ptr);
    }
    omni::nilRefLock().unlock();
  }
  return _the_nil_ptr;
#endif
}

const char* Example::Hello::_PD_repoId = "IDL:Example/Hello:1.0";


Example::_objref_Hello::~_objref_Hello() {
  
}


Example::_objref_Hello::_objref_Hello(omniIOR* ior, omniIdentity* id) :
   omniObjRef(::Example::Hello::_PD_repoId, ior, id, 1)
   
   
{
  _PR_setobj(this);
}

void*
Example::_objref_Hello::_ptrToObjRef(const char* id)
{
  if (id == ::Example::Hello::_PD_repoId)
    return (::Example::Hello_ptr) this;
  
  if (id == ::CORBA::Object::_PD_repoId)
    return (::CORBA::Object_ptr) this;

  if (omni::strMatch(id, ::Example::Hello::_PD_repoId))
    return (::Example::Hello_ptr) this;
  
  if (omni::strMatch(id, ::CORBA::Object::_PD_repoId))
    return (::CORBA::Object_ptr) this;

  return 0;
}


//
// Code for Example::Hello::sayHello

// Proxy call descriptor class. Mangled signature:
//  _cstring
class _0RL_cd_46c583fdb9378714_00000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_46c583fdb9378714_00000000(LocalCallFn lcfn, const char* op_, size_t oplen, _CORBA_Boolean upcall=0)
    : omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  
  void unmarshalReturnedValues(cdrStream&);
  void marshalReturnedValues(cdrStream&);
  
  
  static const char* const _user_exns[];

  ::CORBA::String_var result;
};

void _0RL_cd_46c583fdb9378714_00000000::marshalReturnedValues(cdrStream& _n)
{
  _n.marshalString(result,0);

}

void _0RL_cd_46c583fdb9378714_00000000::unmarshalReturnedValues(cdrStream& _n)
{
  result = _n.unmarshalString(0);

}

const char* const _0RL_cd_46c583fdb9378714_00000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_46c583fdb9378714_10000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_46c583fdb9378714_00000000* tcd = (_0RL_cd_46c583fdb9378714_00000000*)cd;
  Example::_impl_Hello* impl = (Example::_impl_Hello*) svnt->_ptrToInterface(Example::Hello::_PD_repoId);
  tcd->result = impl->sayHello();


}

char* Example::_objref_Hello::sayHello()
{
  _0RL_cd_46c583fdb9378714_00000000 _call_desc(_0RL_lcfn_46c583fdb9378714_10000000, "sayHello", 9);


  _invoke(_call_desc);
  return _call_desc.result._retn();


}

Example::_pof_Hello::~_pof_Hello() {}


omniObjRef*
Example::_pof_Hello::newObjRef(omniIOR* ior, omniIdentity* id)
{
  return new ::Example::_objref_Hello(ior, id);
}


::CORBA::Boolean
Example::_pof_Hello::is_a(const char* id) const
{
  if (omni::ptrStrMatch(id, ::Example::Hello::_PD_repoId))
    return 1;
  
  return 0;
}

const Example::_pof_Hello _the_pof_Example_mHello;

Example::_impl_Hello::~_impl_Hello() {}


::CORBA::Boolean
Example::_impl_Hello::_dispatch(omniCallHandle& _handle)
{
  const char* op = _handle.operation_name();

  if (omni::strMatch(op, "sayHello")) {

    _0RL_cd_46c583fdb9378714_00000000 _call_desc(_0RL_lcfn_46c583fdb9378714_10000000, "sayHello", 9, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }


  return 0;
}

void*
Example::_impl_Hello::_ptrToInterface(const char* id)
{
  if (id == ::Example::Hello::_PD_repoId)
    return (::Example::_impl_Hello*) this;
  
  if (id == ::CORBA::Object::_PD_repoId)
    return (void*) 1;

  if (omni::strMatch(id, ::Example::Hello::_PD_repoId))
    return (::Example::_impl_Hello*) this;
  
  if (omni::strMatch(id, ::CORBA::Object::_PD_repoId))
    return (void*) 1;
  return 0;
}

const char*
Example::_impl_Hello::_mostDerivedRepoId()
{
  return ::Example::Hello::_PD_repoId;
}

POA_Example::Hello::~Hello() {}
