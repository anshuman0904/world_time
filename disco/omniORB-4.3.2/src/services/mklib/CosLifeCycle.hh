// This file is generated by omniidl (C++ backend)- omniORB_4_3. Do not edit.
#ifndef __CosLifeCycle_hh__
#define __CosLifeCycle_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_CosLifeCycle
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_CosLifeCycle
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_CosLifeCycle
#endif


#include "COS_sysdep.h"
#ifndef __CosNaming_hh_EXTERNAL_GUARD__
#define __CosNaming_hh_EXTERNAL_GUARD__
#include "CosNaming.hh"
#endif



#ifdef USE_stub_in_nt_dll
# ifndef USE_core_stub_in_nt_dll
#  define USE_core_stub_in_nt_dll
# endif
# ifndef USE_dyn_stub_in_nt_dll
#  define USE_dyn_stub_in_nt_dll
# endif
#endif

#ifdef _core_attr
# error "A local CPP macro _core_attr has already been defined."
#else
# ifdef  USE_core_stub_in_nt_dll
#  define _core_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _core_attr
# endif
#endif

#ifdef _dyn_attr
# error "A local CPP macro _dyn_attr has already been defined."
#else
# ifdef  USE_dyn_stub_in_nt_dll
#  define _dyn_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _dyn_attr
# endif
#endif



_CORBA_MODULE CosLifeCycle

_CORBA_MODULE_BEG

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_Key;

  typedef CosNaming::Name Key;
  typedef CosNaming::Name_var Key_var;
  typedef CosNaming::Name_out Key_out;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_Factory;

  typedef ::CORBA::Object Factory;
  typedef ::CORBA::Object_ptr Factory_ptr;
  typedef ::CORBA::ObjectRef FactoryRef;
  
  typedef ::CORBA::Object_Helper Factory_Helper;
  
  typedef ::CORBA::Object_var Factory_var;
  typedef ::CORBA::Object_out Factory_out;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_Factories;

  class Factories_var;

  class Factories : public _CORBA_Unbounded_Sequence_ObjRef< ::CORBA::Object, ::CORBA::Object_Element, Factory_Helper >  {
  public:
    typedef Factories_var _var_type;
    inline Factories() {}
    inline Factories(const Factories& _s)
      : _CORBA_Unbounded_Sequence_ObjRef< ::CORBA::Object, ::CORBA::Object_Element, Factory_Helper > (_s) {}

    inline Factories(_CORBA_ULong _max)
      : _CORBA_Unbounded_Sequence_ObjRef< ::CORBA::Object, ::CORBA::Object_Element, Factory_Helper > (_max) {}
    inline Factories(_CORBA_ULong _max, _CORBA_ULong _len, Factory_ptr* _val, _CORBA_Boolean _rel=0)
      : _CORBA_Unbounded_Sequence_ObjRef< ::CORBA::Object, ::CORBA::Object_Element, Factory_Helper > (_max, _len, _val, _rel) {}

  

    inline Factories& operator = (const Factories& _s) {
      _CORBA_Unbounded_Sequence_ObjRef< ::CORBA::Object, ::CORBA::Object_Element, Factory_Helper > ::operator=(_s);
      return *this;
    }
  };

  class Factories_out;

  class Factories_var {
  public:
    inline Factories_var() : _pd_seq(0) {}
    inline Factories_var(Factories* _s) : _pd_seq(_s) {}
    inline Factories_var(const Factories_var& _s) {
      if (_s._pd_seq)  _pd_seq = new Factories(*_s._pd_seq);
      else             _pd_seq = 0;
    }
    inline ~Factories_var() { if (_pd_seq)  delete _pd_seq; }
      
    inline Factories_var& operator = (Factories* _s) {
      if (_pd_seq)  delete _pd_seq;
      _pd_seq = _s;
      return *this;
    }
    inline Factories_var& operator = (const Factories_var& _s) {
      if (&_s != this) {
        if (_s._pd_seq) {
          if (!_pd_seq)  _pd_seq = new Factories;
          *_pd_seq = *_s._pd_seq;
        }
        else if (_pd_seq) {
          delete _pd_seq;
          _pd_seq = 0;
        }
      }
      return *this;
    }
    inline ::CORBA::Object_Element operator [] (_CORBA_ULong _s) {
      return (*_pd_seq)[_s];
    }

  

    inline Factories* operator -> () { return _pd_seq; }
    inline const Factories* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
    inline operator Factories& () const { return *_pd_seq; }
#else
    inline operator const Factories& () const { return *_pd_seq; }
    inline operator Factories& () { return *_pd_seq; }
#endif
      
    inline const Factories& in() const { return *_pd_seq; }
    inline Factories&       inout()    { return *_pd_seq; }
    inline Factories*&      out() {
      if (_pd_seq) { delete _pd_seq; _pd_seq = 0; }
      return _pd_seq;
    }
    inline Factories* _retn() { Factories* tmp = _pd_seq; _pd_seq = 0; return tmp; }
      
    friend class Factories_out;
    
  private:
    Factories* _pd_seq;
  };

  class Factories_out {
  public:
    inline Factories_out(Factories*& _s) : _data(_s) { _data = 0; }
    inline Factories_out(Factories_var& _s)
      : _data(_s._pd_seq) { _s = (Factories*) 0; }
    inline Factories_out(const Factories_out& _s) : _data(_s._data) {}
    inline Factories_out& operator = (const Factories_out& _s) {
      _data = _s._data;
      return *this;
    }
    inline Factories_out& operator = (Factories* _s) {
      _data = _s;
      return *this;
    }
    inline operator Factories*&()  { return _data; }
    inline Factories*& ptr()       { return _data; }
    inline Factories* operator->() { return _data; }

    inline ::CORBA::Object_Element operator [] (_CORBA_ULong _i) {
      return (*_data)[_i];
    }

  

    Factories*& _data;

  private:
    Factories_out();
    Factories_out& operator=(const Factories_var&);
  };

  struct NVP {
    typedef _CORBA_ConstrType_Variable_Var<NVP> _var_type;

    
    ::CORBA::String_member name;

    ::CORBA::Any value;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef NVP::_var_type NVP_var;

  typedef _CORBA_ConstrType_Variable_OUT_arg< NVP,NVP_var > NVP_out;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_NVP;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_NameValuePair;

  typedef NVP NameValuePair;
  typedef NVP_var NameValuePair_var;
  typedef NVP_out NameValuePair_out;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_Criteria;

  class Criteria_var;

  class Criteria : public _CORBA_Unbounded_Sequence< NameValuePair >  {
  public:
    typedef Criteria_var _var_type;
    inline Criteria() {}
    inline Criteria(const Criteria& _s)
      : _CORBA_Unbounded_Sequence< NameValuePair > (_s) {}

    inline Criteria(_CORBA_ULong _max)
      : _CORBA_Unbounded_Sequence< NameValuePair > (_max) {}
    inline Criteria(_CORBA_ULong _max, _CORBA_ULong _len, NameValuePair* _val, _CORBA_Boolean _rel=0)
      : _CORBA_Unbounded_Sequence< NameValuePair > (_max, _len, _val, _rel) {}

  

    inline Criteria& operator = (const Criteria& _s) {
      _CORBA_Unbounded_Sequence< NameValuePair > ::operator=(_s);
      return *this;
    }
  };

  class Criteria_out;

  class Criteria_var {
  public:
    inline Criteria_var() : _pd_seq(0) {}
    inline Criteria_var(Criteria* _s) : _pd_seq(_s) {}
    inline Criteria_var(const Criteria_var& _s) {
      if (_s._pd_seq)  _pd_seq = new Criteria(*_s._pd_seq);
      else             _pd_seq = 0;
    }
    inline ~Criteria_var() { if (_pd_seq)  delete _pd_seq; }
      
    inline Criteria_var& operator = (Criteria* _s) {
      if (_pd_seq)  delete _pd_seq;
      _pd_seq = _s;
      return *this;
    }
    inline Criteria_var& operator = (const Criteria_var& _s) {
      if (&_s != this) {
        if (_s._pd_seq) {
          if (!_pd_seq)  _pd_seq = new Criteria;
          *_pd_seq = *_s._pd_seq;
        }
        else if (_pd_seq) {
          delete _pd_seq;
          _pd_seq = 0;
        }
      }
      return *this;
    }
    inline NameValuePair& operator [] (_CORBA_ULong _s) {
      return (*_pd_seq)[_s];
    }

  

    inline Criteria* operator -> () { return _pd_seq; }
    inline const Criteria* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
    inline operator Criteria& () const { return *_pd_seq; }
#else
    inline operator const Criteria& () const { return *_pd_seq; }
    inline operator Criteria& () { return *_pd_seq; }
#endif
      
    inline const Criteria& in() const { return *_pd_seq; }
    inline Criteria&       inout()    { return *_pd_seq; }
    inline Criteria*&      out() {
      if (_pd_seq) { delete _pd_seq; _pd_seq = 0; }
      return _pd_seq;
    }
    inline Criteria* _retn() { Criteria* tmp = _pd_seq; _pd_seq = 0; return tmp; }
      
    friend class Criteria_out;
    
  private:
    Criteria* _pd_seq;
  };

  class Criteria_out {
  public:
    inline Criteria_out(Criteria*& _s) : _data(_s) { _data = 0; }
    inline Criteria_out(Criteria_var& _s)
      : _data(_s._pd_seq) { _s = (Criteria*) 0; }
    inline Criteria_out(const Criteria_out& _s) : _data(_s._data) {}
    inline Criteria_out& operator = (const Criteria_out& _s) {
      _data = _s._data;
      return *this;
    }
    inline Criteria_out& operator = (Criteria* _s) {
      _data = _s;
      return *this;
    }
    inline operator Criteria*&()  { return _data; }
    inline Criteria*& ptr()       { return _data; }
    inline Criteria* operator->() { return _data; }

    inline NameValuePair& operator [] (_CORBA_ULong _i) {
      return (*_data)[_i];
    }

  

    Criteria*& _data;

  private:
    Criteria_out();
    Criteria_out& operator=(const Criteria_var&);
  };

  class NoFactory : public ::CORBA::UserException {
  public:
    
    Key search_key;

  

    inline NoFactory() {
      pd_insertToAnyFn    = insertToAnyFn;
      pd_insertToAnyFnNCP = insertToAnyFnNCP;
    }
    NoFactory(const NoFactory&);
    NoFactory(const Key i_search_key);
    NoFactory& operator=(const NoFactory&);
    virtual ~NoFactory();
    virtual void _raise() const;
    static NoFactory* _downcast(::CORBA::Exception*);
    static const NoFactory* _downcast(const ::CORBA::Exception*);
    static inline NoFactory* _narrow(::CORBA::Exception* _e) {
      return _downcast(_e);
    }
    
    void operator>>=(cdrStream&) const ;
    void operator<<=(cdrStream&) ;

    static _core_attr insertExceptionToAny    insertToAnyFn;
    static _core_attr insertExceptionToAnyNCP insertToAnyFnNCP;

    virtual ::CORBA::Exception* _NP_duplicate() const;

    static _core_attr const char* _PD_repoId;
    static _core_attr const char* _PD_typeId;

  private:
    virtual const char* _NP_typeId() const;
    virtual const char* _NP_repoId(int*) const;
    virtual void _NP_marshal(cdrStream&) const;
  };

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_NoFactory;

  class NotCopyable : public ::CORBA::UserException {
  public:
    
    ::CORBA::String_member reason;

  

    inline NotCopyable() {
      pd_insertToAnyFn    = insertToAnyFn;
      pd_insertToAnyFnNCP = insertToAnyFnNCP;
    }
    NotCopyable(const NotCopyable&);
    NotCopyable(const char* i_reason);
    NotCopyable& operator=(const NotCopyable&);
    virtual ~NotCopyable();
    virtual void _raise() const;
    static NotCopyable* _downcast(::CORBA::Exception*);
    static const NotCopyable* _downcast(const ::CORBA::Exception*);
    static inline NotCopyable* _narrow(::CORBA::Exception* _e) {
      return _downcast(_e);
    }
    
    void operator>>=(cdrStream&) const ;
    void operator<<=(cdrStream&) ;

    static _core_attr insertExceptionToAny    insertToAnyFn;
    static _core_attr insertExceptionToAnyNCP insertToAnyFnNCP;

    virtual ::CORBA::Exception* _NP_duplicate() const;

    static _core_attr const char* _PD_repoId;
    static _core_attr const char* _PD_typeId;

  private:
    virtual const char* _NP_typeId() const;
    virtual const char* _NP_repoId(int*) const;
    virtual void _NP_marshal(cdrStream&) const;
  };

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_NotCopyable;

  class NotMovable : public ::CORBA::UserException {
  public:
    
    ::CORBA::String_member reason;

  

    inline NotMovable() {
      pd_insertToAnyFn    = insertToAnyFn;
      pd_insertToAnyFnNCP = insertToAnyFnNCP;
    }
    NotMovable(const NotMovable&);
    NotMovable(const char* i_reason);
    NotMovable& operator=(const NotMovable&);
    virtual ~NotMovable();
    virtual void _raise() const;
    static NotMovable* _downcast(::CORBA::Exception*);
    static const NotMovable* _downcast(const ::CORBA::Exception*);
    static inline NotMovable* _narrow(::CORBA::Exception* _e) {
      return _downcast(_e);
    }
    
    void operator>>=(cdrStream&) const ;
    void operator<<=(cdrStream&) ;

    static _core_attr insertExceptionToAny    insertToAnyFn;
    static _core_attr insertExceptionToAnyNCP insertToAnyFnNCP;

    virtual ::CORBA::Exception* _NP_duplicate() const;

    static _core_attr const char* _PD_repoId;
    static _core_attr const char* _PD_typeId;

  private:
    virtual const char* _NP_typeId() const;
    virtual const char* _NP_repoId(int*) const;
    virtual void _NP_marshal(cdrStream&) const;
  };

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_NotMovable;

  class NotRemovable : public ::CORBA::UserException {
  public:
    
    ::CORBA::String_member reason;

  

    inline NotRemovable() {
      pd_insertToAnyFn    = insertToAnyFn;
      pd_insertToAnyFnNCP = insertToAnyFnNCP;
    }
    NotRemovable(const NotRemovable&);
    NotRemovable(const char* i_reason);
    NotRemovable& operator=(const NotRemovable&);
    virtual ~NotRemovable();
    virtual void _raise() const;
    static NotRemovable* _downcast(::CORBA::Exception*);
    static const NotRemovable* _downcast(const ::CORBA::Exception*);
    static inline NotRemovable* _narrow(::CORBA::Exception* _e) {
      return _downcast(_e);
    }
    
    void operator>>=(cdrStream&) const ;
    void operator<<=(cdrStream&) ;

    static _core_attr insertExceptionToAny    insertToAnyFn;
    static _core_attr insertExceptionToAnyNCP insertToAnyFnNCP;

    virtual ::CORBA::Exception* _NP_duplicate() const;

    static _core_attr const char* _PD_repoId;
    static _core_attr const char* _PD_typeId;

  private:
    virtual const char* _NP_typeId() const;
    virtual const char* _NP_repoId(int*) const;
    virtual void _NP_marshal(cdrStream&) const;
  };

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_NotRemovable;

  class InvalidCriteria : public ::CORBA::UserException {
  public:
    
    Criteria invalid_criteria;

  

    inline InvalidCriteria() {
      pd_insertToAnyFn    = insertToAnyFn;
      pd_insertToAnyFnNCP = insertToAnyFnNCP;
    }
    InvalidCriteria(const InvalidCriteria&);
    InvalidCriteria(const Criteria i_invalid_criteria);
    InvalidCriteria& operator=(const InvalidCriteria&);
    virtual ~InvalidCriteria();
    virtual void _raise() const;
    static InvalidCriteria* _downcast(::CORBA::Exception*);
    static const InvalidCriteria* _downcast(const ::CORBA::Exception*);
    static inline InvalidCriteria* _narrow(::CORBA::Exception* _e) {
      return _downcast(_e);
    }
    
    void operator>>=(cdrStream&) const ;
    void operator<<=(cdrStream&) ;

    static _core_attr insertExceptionToAny    insertToAnyFn;
    static _core_attr insertExceptionToAnyNCP insertToAnyFnNCP;

    virtual ::CORBA::Exception* _NP_duplicate() const;

    static _core_attr const char* _PD_repoId;
    static _core_attr const char* _PD_typeId;

  private:
    virtual const char* _NP_typeId() const;
    virtual const char* _NP_repoId(int*) const;
    virtual void _NP_marshal(cdrStream&) const;
  };

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_InvalidCriteria;

  class CannotMeetCriteria : public ::CORBA::UserException {
  public:
    
    Criteria unmet_criteria;

  

    inline CannotMeetCriteria() {
      pd_insertToAnyFn    = insertToAnyFn;
      pd_insertToAnyFnNCP = insertToAnyFnNCP;
    }
    CannotMeetCriteria(const CannotMeetCriteria&);
    CannotMeetCriteria(const Criteria i_unmet_criteria);
    CannotMeetCriteria& operator=(const CannotMeetCriteria&);
    virtual ~CannotMeetCriteria();
    virtual void _raise() const;
    static CannotMeetCriteria* _downcast(::CORBA::Exception*);
    static const CannotMeetCriteria* _downcast(const ::CORBA::Exception*);
    static inline CannotMeetCriteria* _narrow(::CORBA::Exception* _e) {
      return _downcast(_e);
    }
    
    void operator>>=(cdrStream&) const ;
    void operator<<=(cdrStream&) ;

    static _core_attr insertExceptionToAny    insertToAnyFn;
    static _core_attr insertExceptionToAnyNCP insertToAnyFnNCP;

    virtual ::CORBA::Exception* _NP_duplicate() const;

    static _core_attr const char* _PD_repoId;
    static _core_attr const char* _PD_typeId;

  private:
    virtual const char* _NP_typeId() const;
    virtual const char* _NP_repoId(int*) const;
    virtual void _NP_marshal(cdrStream&) const;
  };

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_CannotMeetCriteria;

#ifndef __CosLifeCycle_mFactoryFinder__
#define __CosLifeCycle_mFactoryFinder__
  class FactoryFinder;
  class _objref_FactoryFinder;
  class _impl_FactoryFinder;
  
  typedef _objref_FactoryFinder* FactoryFinder_ptr;
  typedef FactoryFinder_ptr FactoryFinderRef;

  class FactoryFinder_Helper {
  public:
    typedef FactoryFinder_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_FactoryFinder, FactoryFinder_Helper> FactoryFinder_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_FactoryFinder,FactoryFinder_Helper > FactoryFinder_out;

#endif

  // interface FactoryFinder
  class FactoryFinder {
  public:
    // Declarations for this interface type.
    typedef FactoryFinder_ptr _ptr_type;
    typedef FactoryFinder_var _var_type;

    static _ptr_type _duplicate(_ptr_type);
    static _ptr_type _narrow(::CORBA::Object_ptr);
    static _ptr_type _unchecked_narrow(::CORBA::Object_ptr);
    
    static _ptr_type _nil();

    static inline void _marshalObjRef(_ptr_type, cdrStream&);

    static inline _ptr_type _unmarshalObjRef(cdrStream& s) {
      omniObjRef* o = omniObjRef::_unMarshal(_PD_repoId,s);
      if (o)
        return (_ptr_type) o->_ptrToObjRef(_PD_repoId);
      else
        return _nil();
    }

    static inline _ptr_type _fromObjRef(omniObjRef* o) {
      if (o)
        return (_ptr_type) o->_ptrToObjRef(_PD_repoId);
      else
        return _nil();
    }

    static _core_attr const char* _PD_repoId;

    // Other IDL defined within this scope.
    
  };

  class _objref_FactoryFinder :
    public virtual ::CORBA::Object,
    public virtual omniObjRef
  {
  public:
    // IDL operations
    Factories* find_factories(const ::CosLifeCycle::Key& factory_key);

    // Constructors
    inline _objref_FactoryFinder()  { _PR_setobj(0); }  // nil
    _objref_FactoryFinder(omniIOR*, omniIdentity*);

  protected:
    virtual ~_objref_FactoryFinder();

    
  private:
    virtual void* _ptrToObjRef(const char*);

    _objref_FactoryFinder(const _objref_FactoryFinder&);
    _objref_FactoryFinder& operator = (const _objref_FactoryFinder&);
    // not implemented

    friend class FactoryFinder;
  };

  class _pof_FactoryFinder : public _OMNI_NS(proxyObjectFactory) {
  public:
    inline _pof_FactoryFinder() : _OMNI_NS(proxyObjectFactory)(FactoryFinder::_PD_repoId) {}
    virtual ~_pof_FactoryFinder();

    virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
    virtual _CORBA_Boolean is_a(const char*) const;
  };

  class _impl_FactoryFinder :
    public virtual omniServant
  {
  public:
    virtual ~_impl_FactoryFinder();

    virtual Factories* find_factories(const ::CosLifeCycle::Key& factory_key) = 0;
    
  public:  // Really protected, workaround for xlC
    virtual _CORBA_Boolean _dispatch(omniCallHandle&);

  private:
    virtual void* _ptrToInterface(const char*);
    virtual const char* _mostDerivedRepoId();
    
  };


  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_FactoryFinder;

#ifndef __CosLifeCycle_mLifeCycleObject__
#define __CosLifeCycle_mLifeCycleObject__
  class LifeCycleObject;
  class _objref_LifeCycleObject;
  class _impl_LifeCycleObject;
  
  typedef _objref_LifeCycleObject* LifeCycleObject_ptr;
  typedef LifeCycleObject_ptr LifeCycleObjectRef;

  class LifeCycleObject_Helper {
  public:
    typedef LifeCycleObject_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_LifeCycleObject, LifeCycleObject_Helper> LifeCycleObject_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_LifeCycleObject,LifeCycleObject_Helper > LifeCycleObject_out;

#endif

  // interface LifeCycleObject
  class LifeCycleObject {
  public:
    // Declarations for this interface type.
    typedef LifeCycleObject_ptr _ptr_type;
    typedef LifeCycleObject_var _var_type;

    static _ptr_type _duplicate(_ptr_type);
    static _ptr_type _narrow(::CORBA::Object_ptr);
    static _ptr_type _unchecked_narrow(::CORBA::Object_ptr);
    
    static _ptr_type _nil();

    static inline void _marshalObjRef(_ptr_type, cdrStream&);

    static inline _ptr_type _unmarshalObjRef(cdrStream& s) {
      omniObjRef* o = omniObjRef::_unMarshal(_PD_repoId,s);
      if (o)
        return (_ptr_type) o->_ptrToObjRef(_PD_repoId);
      else
        return _nil();
    }

    static inline _ptr_type _fromObjRef(omniObjRef* o) {
      if (o)
        return (_ptr_type) o->_ptrToObjRef(_PD_repoId);
      else
        return _nil();
    }

    static _core_attr const char* _PD_repoId;

    // Other IDL defined within this scope.
    
  };

  class _objref_LifeCycleObject :
    public virtual ::CORBA::Object,
    public virtual omniObjRef
  {
  public:
    // IDL operations
    LifeCycleObject_ptr copy(::CosLifeCycle::FactoryFinder_ptr there, const ::CosLifeCycle::Criteria& the_criteria);
    void move(::CosLifeCycle::FactoryFinder_ptr there, const ::CosLifeCycle::Criteria& the_criteria);
    void remove();

    // Constructors
    inline _objref_LifeCycleObject()  { _PR_setobj(0); }  // nil
    _objref_LifeCycleObject(omniIOR*, omniIdentity*);

  protected:
    virtual ~_objref_LifeCycleObject();

    
  private:
    virtual void* _ptrToObjRef(const char*);

    _objref_LifeCycleObject(const _objref_LifeCycleObject&);
    _objref_LifeCycleObject& operator = (const _objref_LifeCycleObject&);
    // not implemented

    friend class LifeCycleObject;
  };

  class _pof_LifeCycleObject : public _OMNI_NS(proxyObjectFactory) {
  public:
    inline _pof_LifeCycleObject() : _OMNI_NS(proxyObjectFactory)(LifeCycleObject::_PD_repoId) {}
    virtual ~_pof_LifeCycleObject();

    virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
    virtual _CORBA_Boolean is_a(const char*) const;
  };

  class _impl_LifeCycleObject :
    public virtual omniServant
  {
  public:
    virtual ~_impl_LifeCycleObject();

    virtual LifeCycleObject_ptr copy(::CosLifeCycle::FactoryFinder_ptr there, const ::CosLifeCycle::Criteria& the_criteria) = 0;
    virtual void move(::CosLifeCycle::FactoryFinder_ptr there, const ::CosLifeCycle::Criteria& the_criteria) = 0;
    virtual void remove() = 0;
    
  public:  // Really protected, workaround for xlC
    virtual _CORBA_Boolean _dispatch(omniCallHandle&);

  private:
    virtual void* _ptrToInterface(const char*);
    virtual const char* _mostDerivedRepoId();
    
  };


  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_LifeCycleObject;

#ifndef __CosLifeCycle_mGenericFactory__
#define __CosLifeCycle_mGenericFactory__
  class GenericFactory;
  class _objref_GenericFactory;
  class _impl_GenericFactory;
  
  typedef _objref_GenericFactory* GenericFactory_ptr;
  typedef GenericFactory_ptr GenericFactoryRef;

  class GenericFactory_Helper {
  public:
    typedef GenericFactory_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_GenericFactory, GenericFactory_Helper> GenericFactory_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_GenericFactory,GenericFactory_Helper > GenericFactory_out;

#endif

  // interface GenericFactory
  class GenericFactory {
  public:
    // Declarations for this interface type.
    typedef GenericFactory_ptr _ptr_type;
    typedef GenericFactory_var _var_type;

    static _ptr_type _duplicate(_ptr_type);
    static _ptr_type _narrow(::CORBA::Object_ptr);
    static _ptr_type _unchecked_narrow(::CORBA::Object_ptr);
    
    static _ptr_type _nil();

    static inline void _marshalObjRef(_ptr_type, cdrStream&);

    static inline _ptr_type _unmarshalObjRef(cdrStream& s) {
      omniObjRef* o = omniObjRef::_unMarshal(_PD_repoId,s);
      if (o)
        return (_ptr_type) o->_ptrToObjRef(_PD_repoId);
      else
        return _nil();
    }

    static inline _ptr_type _fromObjRef(omniObjRef* o) {
      if (o)
        return (_ptr_type) o->_ptrToObjRef(_PD_repoId);
      else
        return _nil();
    }

    static _core_attr const char* _PD_repoId;

    // Other IDL defined within this scope.
    
  };

  class _objref_GenericFactory :
    public virtual ::CORBA::Object,
    public virtual omniObjRef
  {
  public:
    // IDL operations
    ::CORBA::Boolean supports(const ::CosLifeCycle::Key& k);
    ::CORBA::Object_ptr create_object(const ::CosLifeCycle::Key& k, const ::CosLifeCycle::Criteria& the_criteria);

    // Constructors
    inline _objref_GenericFactory()  { _PR_setobj(0); }  // nil
    _objref_GenericFactory(omniIOR*, omniIdentity*);

  protected:
    virtual ~_objref_GenericFactory();

    
  private:
    virtual void* _ptrToObjRef(const char*);

    _objref_GenericFactory(const _objref_GenericFactory&);
    _objref_GenericFactory& operator = (const _objref_GenericFactory&);
    // not implemented

    friend class GenericFactory;
  };

  class _pof_GenericFactory : public _OMNI_NS(proxyObjectFactory) {
  public:
    inline _pof_GenericFactory() : _OMNI_NS(proxyObjectFactory)(GenericFactory::_PD_repoId) {}
    virtual ~_pof_GenericFactory();

    virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
    virtual _CORBA_Boolean is_a(const char*) const;
  };

  class _impl_GenericFactory :
    public virtual omniServant
  {
  public:
    virtual ~_impl_GenericFactory();

    virtual ::CORBA::Boolean supports(const ::CosLifeCycle::Key& k) = 0;
    virtual ::CORBA::Object_ptr create_object(const ::CosLifeCycle::Key& k, const ::CosLifeCycle::Criteria& the_criteria) = 0;
    
  public:  // Really protected, workaround for xlC
    virtual _CORBA_Boolean _dispatch(omniCallHandle&);

  private:
    virtual void* _ptrToInterface(const char*);
    virtual const char* _mostDerivedRepoId();
    
  };


  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_GenericFactory;

_CORBA_MODULE_END



_CORBA_MODULE POA_CosLifeCycle
_CORBA_MODULE_BEG

  class FactoryFinder :
    public virtual CosLifeCycle::_impl_FactoryFinder,
    public virtual ::PortableServer::ServantBase
  {
  public:
    virtual ~FactoryFinder();

    inline ::CosLifeCycle::FactoryFinder_ptr _this() {
      return (::CosLifeCycle::FactoryFinder_ptr) _do_this(::CosLifeCycle::FactoryFinder::_PD_repoId);
    }
  };

  class LifeCycleObject :
    public virtual CosLifeCycle::_impl_LifeCycleObject,
    public virtual ::PortableServer::ServantBase
  {
  public:
    virtual ~LifeCycleObject();

    inline ::CosLifeCycle::LifeCycleObject_ptr _this() {
      return (::CosLifeCycle::LifeCycleObject_ptr) _do_this(::CosLifeCycle::LifeCycleObject::_PD_repoId);
    }
  };

  class GenericFactory :
    public virtual CosLifeCycle::_impl_GenericFactory,
    public virtual ::PortableServer::ServantBase
  {
  public:
    virtual ~GenericFactory();

    inline ::CosLifeCycle::GenericFactory_ptr _this() {
      return (::CosLifeCycle::GenericFactory_ptr) _do_this(::CosLifeCycle::GenericFactory::_PD_repoId);
    }
  };

_CORBA_MODULE_END



_CORBA_MODULE OBV_CosLifeCycle
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr

void operator<<=(::CORBA::Any& _a, const CosLifeCycle::Factories& _s);
void operator<<=(::CORBA::Any& _a, CosLifeCycle::Factories* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, CosLifeCycle::Factories*& _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const CosLifeCycle::Factories*& _sp);

extern void operator<<=(::CORBA::Any& _a, const CosLifeCycle::NVP& _s);
extern void operator<<=(::CORBA::Any& _a, CosLifeCycle::NVP* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, CosLifeCycle::NVP*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const CosLifeCycle::NVP*& _sp);

void operator<<=(::CORBA::Any& _a, const CosLifeCycle::Criteria& _s);
void operator<<=(::CORBA::Any& _a, CosLifeCycle::Criteria* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, CosLifeCycle::Criteria*& _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const CosLifeCycle::Criteria*& _sp);

void operator<<=(::CORBA::Any& _a, const CosLifeCycle::NoFactory& _s);
void operator<<=(::CORBA::Any& _a, const CosLifeCycle::NoFactory* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const CosLifeCycle::NoFactory*& _sp);

void operator<<=(::CORBA::Any& _a, const CosLifeCycle::NotCopyable& _s);
void operator<<=(::CORBA::Any& _a, const CosLifeCycle::NotCopyable* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const CosLifeCycle::NotCopyable*& _sp);

void operator<<=(::CORBA::Any& _a, const CosLifeCycle::NotMovable& _s);
void operator<<=(::CORBA::Any& _a, const CosLifeCycle::NotMovable* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const CosLifeCycle::NotMovable*& _sp);

void operator<<=(::CORBA::Any& _a, const CosLifeCycle::NotRemovable& _s);
void operator<<=(::CORBA::Any& _a, const CosLifeCycle::NotRemovable* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const CosLifeCycle::NotRemovable*& _sp);

void operator<<=(::CORBA::Any& _a, const CosLifeCycle::InvalidCriteria& _s);
void operator<<=(::CORBA::Any& _a, const CosLifeCycle::InvalidCriteria* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const CosLifeCycle::InvalidCriteria*& _sp);

void operator<<=(::CORBA::Any& _a, const CosLifeCycle::CannotMeetCriteria& _s);
void operator<<=(::CORBA::Any& _a, const CosLifeCycle::CannotMeetCriteria* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const CosLifeCycle::CannotMeetCriteria*& _sp);

void operator<<=(::CORBA::Any& _a, CosLifeCycle::FactoryFinder_ptr _s);
void operator<<=(::CORBA::Any& _a, CosLifeCycle::FactoryFinder_ptr* _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, CosLifeCycle::FactoryFinder_ptr& _s);

void operator<<=(::CORBA::Any& _a, CosLifeCycle::LifeCycleObject_ptr _s);
void operator<<=(::CORBA::Any& _a, CosLifeCycle::LifeCycleObject_ptr* _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, CosLifeCycle::LifeCycleObject_ptr& _s);

void operator<<=(::CORBA::Any& _a, CosLifeCycle::GenericFactory_ptr _s);
void operator<<=(::CORBA::Any& _a, CosLifeCycle::GenericFactory_ptr* _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, CosLifeCycle::GenericFactory_ptr& _s);



inline void
CosLifeCycle::FactoryFinder::_marshalObjRef(::CosLifeCycle::FactoryFinder_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}

inline void
CosLifeCycle::LifeCycleObject::_marshalObjRef(::CosLifeCycle::LifeCycleObject_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}

inline void
CosLifeCycle::GenericFactory::_marshalObjRef(::CosLifeCycle::GenericFactory_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}



#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_CosLifeCycle
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_CosLifeCycle
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_CosLifeCycle
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_CosLifeCycle
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_CosLifeCycle
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_CosLifeCycle
#endif

#endif  // __CosLifeCycle_hh__
