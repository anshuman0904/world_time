// This file is generated by omniidl (C++ backend)- omniORB_4_3. Do not edit.

#include <omniORB4/objTracker.h>

// valuetype Pollable

void
CORBA::Pollable_Helper::add_ref(::CORBA::Pollable* _v)
{
  if (_v) _v->_add_ref();
}

void
CORBA::Pollable_Helper::remove_ref(::CORBA::Pollable* _v)
{
  if (_v) _v->_remove_ref();
}

CORBA::Pollable*
CORBA::Pollable::_downcast(::CORBA::ValueBase* _b)
{
  return _b ? (CORBA::Pollable*)_b->_ptrToValue(_PD_repoId) : 0;
}

const char* CORBA::Pollable::_PD_repoId = "IDL:omg.org/CORBA/Pollable:1.0";

const char*
CORBA::Pollable::_NP_repositoryId() const
{
  return _PD_repoId;
}

const char*
CORBA::Pollable::_NP_repositoryId(::CORBA::ULong& hash) const
{
  hash = 1031049494U;
  return _PD_repoId;
}

::CORBA::Boolean
CORBA::Pollable::_NP_custom() const
{
  return 0;
}

void*
CORBA::Pollable::_ptrToValue(const char* _id)
{
  if (_id == ::CORBA::Pollable::_PD_repoId)
    return (::CORBA::Pollable*) this;
  
  

  if (_id == ::CORBA::ValueBase::_PD_repoId)
    return (::CORBA::ValueBase*) this;
  
  if (omni::strMatch(_id, ::CORBA::Pollable::_PD_repoId))
    return (::CORBA::Pollable*) this;
  
  

  if (omni::strMatch(_id, ::CORBA::ValueBase::_PD_repoId))
    return (::CORBA::ValueBase*) this;

  return 0;
}

void
CORBA::Pollable::_NP_marshal(CORBA::Pollable* _v, cdrStream& _0s)
{
  omniValueType::marshal(_v, CORBA::Pollable::_PD_repoId, _0s);
}

void
CORBA::Pollable_Helper::marshal(::CORBA::Pollable* _v, cdrStream& _0s)
{
  CORBA::Pollable::_NP_marshal(_v,_0s);
}

CORBA::Pollable*
CORBA::Pollable::_NP_unmarshal(cdrStream& _0s)
{
  ::CORBA::ValueBase* _b = omniValueType::unmarshal(CORBA::Pollable::_PD_repoId,
						    1031049494U, 0, _0s);
  CORBA::Pollable* _d = CORBA::Pollable::_downcast(_b);
  if (_b && !_d) {
    _b = omniValueType::handleIncompatibleValue(
           CORBA::Pollable::_PD_repoId,
           1031049494U, _b, (::CORBA::CompletionStatus)_0s.completion());
    _d = CORBA::Pollable::_downcast(_b);
  }
  return _d;
}

CORBA::Pollable*
CORBA::Pollable_Helper::unmarshal(cdrStream& _0s)
{
  return CORBA::Pollable::_NP_unmarshal(_0s);
}

void
CORBA::Pollable::_PR_marshal_state(cdrStream& _0s) const
{
  
}

void
CORBA::Pollable::_PR_unmarshal_state(cdrStream& _0s)
{
  
}

#ifdef OMNI_HAVE_COVARIANT_RETURNS
CORBA::Pollable*
#else
::CORBA::ValueBase*
#endif
CORBA::Pollable::_copy_value()
{
  ::CORBA::ValueBase* _b;
  _b = _omni_ValueFactoryManager::create_for_unmarshal(_PD_repoId, 1031049494U);
  CORBA::Pollable* _v = CORBA::Pollable::_downcast(_b);
  if (!_v) {
    ::CORBA::remove_ref(_b);
    OMNIORB_THROW(BAD_PARAM, BAD_PARAM_ValueFactoryFailure,
		  ::CORBA::COMPLETED_NO);
  }
  _v->_PR_copy_state(this);
  return _v;
}

void
CORBA::Pollable::_PR_copy_state(CORBA::Pollable* _v)
{
  
}


CORBA::Pollable::Pollable()  {}
CORBA::Pollable::~Pollable() {}

const _omni_ValueIds*
CORBA::Pollable::_NP_truncatableIds() const
{
  return 0;
}

// valuetype DIIPollable

void
CORBA::DIIPollable_Helper::add_ref(::CORBA::DIIPollable* _v)
{
  if (_v) _v->_add_ref();
}

void
CORBA::DIIPollable_Helper::remove_ref(::CORBA::DIIPollable* _v)
{
  if (_v) _v->_remove_ref();
}

CORBA::DIIPollable*
CORBA::DIIPollable::_downcast(::CORBA::ValueBase* _b)
{
  return _b ? (CORBA::DIIPollable*)_b->_ptrToValue(_PD_repoId) : 0;
}

const char* CORBA::DIIPollable::_PD_repoId = "IDL:omg.org/CORBA/DIIPollable:1.0";

const char*
CORBA::DIIPollable::_NP_repositoryId() const
{
  return _PD_repoId;
}

const char*
CORBA::DIIPollable::_NP_repositoryId(::CORBA::ULong& hash) const
{
  hash = 3087473202U;
  return _PD_repoId;
}

::CORBA::Boolean
CORBA::DIIPollable::_NP_custom() const
{
  return 0;
}

void*
CORBA::DIIPollable::_ptrToValue(const char* _id)
{
  if (_id == ::CORBA::DIIPollable::_PD_repoId)
    return (::CORBA::DIIPollable*) this;
  
  if (_id == ::CORBA::Pollable::_PD_repoId)
    return (::CORBA::Pollable*) this;



  if (_id == ::CORBA::ValueBase::_PD_repoId)
    return (::CORBA::ValueBase*) this;
  
  if (omni::strMatch(_id, ::CORBA::DIIPollable::_PD_repoId))
    return (::CORBA::DIIPollable*) this;
  
  if (omni::strMatch(_id, ::CORBA::Pollable::_PD_repoId))
    return (::CORBA::Pollable*) this;



  if (omni::strMatch(_id, ::CORBA::ValueBase::_PD_repoId))
    return (::CORBA::ValueBase*) this;

  return 0;
}

void
CORBA::DIIPollable::_NP_marshal(CORBA::DIIPollable* _v, cdrStream& _0s)
{
  omniValueType::marshal(_v, CORBA::DIIPollable::_PD_repoId, _0s);
}

void
CORBA::DIIPollable_Helper::marshal(::CORBA::DIIPollable* _v, cdrStream& _0s)
{
  CORBA::DIIPollable::_NP_marshal(_v,_0s);
}

CORBA::DIIPollable*
CORBA::DIIPollable::_NP_unmarshal(cdrStream& _0s)
{
  ::CORBA::ValueBase* _b = omniValueType::unmarshal(CORBA::DIIPollable::_PD_repoId,
						    3087473202U, 0, _0s);
  CORBA::DIIPollable* _d = CORBA::DIIPollable::_downcast(_b);
  if (_b && !_d) {
    _b = omniValueType::handleIncompatibleValue(
           CORBA::DIIPollable::_PD_repoId,
           3087473202U, _b, (::CORBA::CompletionStatus)_0s.completion());
    _d = CORBA::DIIPollable::_downcast(_b);
  }
  return _d;
}

CORBA::DIIPollable*
CORBA::DIIPollable_Helper::unmarshal(cdrStream& _0s)
{
  return CORBA::DIIPollable::_NP_unmarshal(_0s);
}

void
CORBA::DIIPollable::_PR_marshal_state(cdrStream& _0s) const
{
  
}

void
CORBA::DIIPollable::_PR_unmarshal_state(cdrStream& _0s)
{
  
}

#ifdef OMNI_HAVE_COVARIANT_RETURNS
CORBA::DIIPollable*
#else
::CORBA::ValueBase*
#endif
CORBA::DIIPollable::_copy_value()
{
  ::CORBA::ValueBase* _b;
  _b = _omni_ValueFactoryManager::create_for_unmarshal(_PD_repoId, 3087473202U);
  CORBA::DIIPollable* _v = CORBA::DIIPollable::_downcast(_b);
  if (!_v) {
    ::CORBA::remove_ref(_b);
    OMNIORB_THROW(BAD_PARAM, BAD_PARAM_ValueFactoryFailure,
		  ::CORBA::COMPLETED_NO);
  }
  _v->_PR_copy_state(this);
  return _v;
}

void
CORBA::DIIPollable::_PR_copy_state(CORBA::DIIPollable* _v)
{
  
}


CORBA::DIIPollable::DIIPollable()  {}
CORBA::DIIPollable::~DIIPollable() {}

const _omni_ValueIds*
CORBA::DIIPollable::_NP_truncatableIds() const
{
  return 0;
}

::CORBA::Exception::insertExceptionToAny CORBA::PollableSet::NoPossiblePollable::insertToAnyFn = 0;
::CORBA::Exception::insertExceptionToAnyNCP CORBA::PollableSet::NoPossiblePollable::insertToAnyFnNCP = 0;

CORBA::PollableSet::NoPossiblePollable::NoPossiblePollable(const CORBA::PollableSet::NoPossiblePollable& _s) : ::CORBA::UserException(_s)
{
  
}



CORBA::PollableSet::NoPossiblePollable& CORBA::PollableSet::NoPossiblePollable::operator=(const CORBA::PollableSet::NoPossiblePollable& _s)
{
  if (&_s != this) {
    ((::CORBA::UserException*) this)->operator=(_s);
    
  }
  return *this;
}

CORBA::PollableSet::NoPossiblePollable::~NoPossiblePollable() {}

void CORBA::PollableSet::NoPossiblePollable::_raise() const { throw *this; }

const char* CORBA::PollableSet::NoPossiblePollable::_PD_repoId = "IDL:omg.org/CORBA/PollableSet/NoPossiblePollable:1.0";
const char* CORBA::PollableSet::NoPossiblePollable::_PD_typeId = "Exception/UserException/CORBA::PollableSet::NoPossiblePollable";

CORBA::PollableSet::NoPossiblePollable* CORBA::PollableSet::NoPossiblePollable::_downcast(::CORBA::Exception* _e) {
  return (NoPossiblePollable*) _NP_is_a(_e, _PD_typeId);
}

const CORBA::PollableSet::NoPossiblePollable* CORBA::PollableSet::NoPossiblePollable::_downcast(const ::CORBA::Exception* _e) {
  return (const NoPossiblePollable*) _NP_is_a(_e, _PD_typeId);
}

::CORBA::Exception* CORBA::PollableSet::NoPossiblePollable::_NP_duplicate() const {
  return new NoPossiblePollable(*this);
}

const char* CORBA::PollableSet::NoPossiblePollable::_NP_typeId() const {
  return _PD_typeId;
}

const char* CORBA::PollableSet::NoPossiblePollable::_NP_repoId(int* _size) const {
  *_size = sizeof("IDL:omg.org/CORBA/PollableSet/NoPossiblePollable:1.0");
  return _PD_repoId;
}
 
void CORBA::PollableSet::NoPossiblePollable::_NP_marshal(cdrStream& _s) const {
  *this >>= _s;
}

::CORBA::Exception::insertExceptionToAny CORBA::PollableSet::UnknownPollable::insertToAnyFn = 0;
::CORBA::Exception::insertExceptionToAnyNCP CORBA::PollableSet::UnknownPollable::insertToAnyFnNCP = 0;

CORBA::PollableSet::UnknownPollable::UnknownPollable(const CORBA::PollableSet::UnknownPollable& _s) : ::CORBA::UserException(_s)
{
  
}



CORBA::PollableSet::UnknownPollable& CORBA::PollableSet::UnknownPollable::operator=(const CORBA::PollableSet::UnknownPollable& _s)
{
  if (&_s != this) {
    ((::CORBA::UserException*) this)->operator=(_s);
    
  }
  return *this;
}

CORBA::PollableSet::UnknownPollable::~UnknownPollable() {}

void CORBA::PollableSet::UnknownPollable::_raise() const { throw *this; }

const char* CORBA::PollableSet::UnknownPollable::_PD_repoId = "IDL:omg.org/CORBA/PollableSet/UnknownPollable:1.0";
const char* CORBA::PollableSet::UnknownPollable::_PD_typeId = "Exception/UserException/CORBA::PollableSet::UnknownPollable";

CORBA::PollableSet::UnknownPollable* CORBA::PollableSet::UnknownPollable::_downcast(::CORBA::Exception* _e) {
  return (UnknownPollable*) _NP_is_a(_e, _PD_typeId);
}

const CORBA::PollableSet::UnknownPollable* CORBA::PollableSet::UnknownPollable::_downcast(const ::CORBA::Exception* _e) {
  return (const UnknownPollable*) _NP_is_a(_e, _PD_typeId);
}

::CORBA::Exception* CORBA::PollableSet::UnknownPollable::_NP_duplicate() const {
  return new UnknownPollable(*this);
}

const char* CORBA::PollableSet::UnknownPollable::_NP_typeId() const {
  return _PD_typeId;
}

const char* CORBA::PollableSet::UnknownPollable::_NP_repoId(int* _size) const {
  *_size = sizeof("IDL:omg.org/CORBA/PollableSet/UnknownPollable:1.0");
  return _PD_repoId;
}
 
void CORBA::PollableSet::UnknownPollable::_NP_marshal(cdrStream& _s) const {
  *this >>= _s;
}

CORBA::PollableSet_ptr CORBA::PollableSet_Helper::_nil() {
  return ::CORBA::PollableSet::_nil();
}

::CORBA::Boolean CORBA::PollableSet_Helper::is_nil(::CORBA::PollableSet_ptr p) {
  return ::CORBA::is_nil(p);

}

void CORBA::PollableSet_Helper::release(::CORBA::PollableSet_ptr p) {
  ::CORBA::release(p);
}

void CORBA::PollableSet_Helper::marshalObjRef(::CORBA::PollableSet_ptr obj, cdrStream& s) {
  ::CORBA::PollableSet::_marshalObjRef(obj, s);
}

CORBA::PollableSet_ptr CORBA::PollableSet_Helper::unmarshalObjRef(cdrStream& s) {
  return ::CORBA::PollableSet::_unmarshalObjRef(s);
}

void CORBA::PollableSet_Helper::duplicate(::CORBA::PollableSet_ptr obj) {
  if (obj && !obj->_NP_is_nil())  obj->_NP_incrRefCount();
}

CORBA::PollableSet_ptr
CORBA::PollableSet::_duplicate(::CORBA::PollableSet_ptr obj)
{
  if (obj && !obj->_NP_is_nil())  obj->_NP_incrRefCount();
  return obj;
}

CORBA::PollableSet_ptr
CORBA::PollableSet::_narrow(::CORBA::Object_ptr obj)
{
  if (!obj || obj->_NP_is_nil()) return _nil();
  _ptr_type e = (_ptr_type) obj->_ptrToObjRef(_PD_repoId);
  if (e) {
    e->_NP_incrRefCount();
    return e;
  }
  return _nil();
}

CORBA::PollableSet_ptr
CORBA::PollableSet::_unchecked_narrow(::CORBA::Object_ptr obj)
{
  return _narrow(obj);
}

CORBA::PollableSet_ptr
CORBA::PollableSet::_nil()
{
#ifdef OMNI_UNLOADABLE_STUBS
  static _nil_PollableSet _the_nil_obj;
  return &_the_nil_obj;
#else
  static _nil_PollableSet* _the_nil_ptr = 0;
  if (!_the_nil_ptr) {
    omni::nilRefLock().lock();
    if (!_the_nil_ptr) {
      _the_nil_ptr = new _nil_PollableSet;
      registerNilCorbaObject(_the_nil_ptr);
    }
    omni::nilRefLock().unlock();
  }
  return _the_nil_ptr;
#endif
}

const char* CORBA::PollableSet::_PD_repoId = "IDL:omg.org/CORBA/PollableSet:1.0";


CORBA::PollableSet::PollableSet()
{
  _PR_setobj((omniObjRef*)1);
}

CORBA::PollableSet::~PollableSet() { }

CORBA::_nil_PollableSet::~_nil_PollableSet() { }

void*
CORBA::PollableSet::_ptrToObjRef(const char* id)
{
  if (id == ::CORBA::PollableSet::_PD_repoId)
    return (::CORBA::PollableSet_ptr) this;
  if (id == ::CORBA::LocalObject::_PD_repoId)
    return (::CORBA::LocalObject_ptr) this;


  if (id == ::CORBA::Object::_PD_repoId)
    return (::CORBA::Object_ptr) this;

  if (omni::strMatch(id, ::CORBA::PollableSet::_PD_repoId))
    return (::CORBA::PollableSet_ptr) this;
  if (omni::strMatch(id, ::CORBA::LocalObject::_PD_repoId))
    return (::CORBA::LocalObject_ptr) this;


  if (omni::strMatch(id, ::CORBA::Object::_PD_repoId))
    return (::CORBA::Object_ptr) this;

  return 0;
}

CORBA::DIIPollable* CORBA::_nil_PollableSet::create_dii_pollable()
{
  OMNIORB_THROW(INV_OBJREF, INV_OBJREF_InvokeOnNilObjRef, ::CORBA::COMPLETED_NO);

#ifdef OMNI_NEED_DUMMY_RETURN
  // Pretend recursive call to silence warnings about no return value
  return create_dii_pollable();
#endif

}



void CORBA::_nil_PollableSet::add_pollable(::CORBA::Pollable* potential)
{
  OMNIORB_THROW(INV_OBJREF, INV_OBJREF_InvokeOnNilObjRef, ::CORBA::COMPLETED_NO);

}



CORBA::Pollable* CORBA::_nil_PollableSet::get_ready_pollable(::CORBA::ULong timeout)
{
  OMNIORB_THROW(INV_OBJREF, INV_OBJREF_InvokeOnNilObjRef, ::CORBA::COMPLETED_NO);

#ifdef OMNI_NEED_DUMMY_RETURN
  // Pretend recursive call to silence warnings about no return value
  return get_ready_pollable(timeout);
#endif

}



void CORBA::_nil_PollableSet::remove(::CORBA::Pollable* potential)
{
  OMNIORB_THROW(INV_OBJREF, INV_OBJREF_InvokeOnNilObjRef, ::CORBA::COMPLETED_NO);

}



::CORBA::UShort CORBA::_nil_PollableSet::number_left()
{
  OMNIORB_THROW(INV_OBJREF, INV_OBJREF_InvokeOnNilObjRef, ::CORBA::COMPLETED_NO);

#ifdef OMNI_NEED_DUMMY_RETURN
  // Pretend recursive call to silence warnings about no return value
  return number_left();
#endif

}



