// This file is generated by omniidl (C++ backend)- omniORB_4_3. Do not edit.
#ifndef __messaging__policy_hh__
#define __messaging__policy_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_messaging__policy
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_messaging__policy
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_messaging__policy
#endif



#ifndef __corbaidl_hh_EXTERNAL_GUARD__
#define __corbaidl_hh_EXTERNAL_GUARD__
#include <corbaidl.hh>
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



_CORBA_MODULE Messaging

_CORBA_MODULE_BEG

  typedef CORBA::OctetSeq PolicyData;
  typedef CORBA::OctetSeq_var PolicyData_var;
  typedef CORBA::OctetSeq_out PolicyData_out;

  struct PolicyValue {
    typedef _CORBA_ConstrType_Variable_Var<PolicyValue> _var_type;

    
    ::CORBA::ULong ptype;

    PolicyData pvalue;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef PolicyValue::_var_type PolicyValue_var;

  typedef _CORBA_ConstrType_Variable_OUT_arg< PolicyValue,PolicyValue_var > PolicyValue_out;

  class PolicyValueSeq_var;

  class PolicyValueSeq : public _CORBA_Unbounded_Sequence< PolicyValue >  {
  public:
    typedef PolicyValueSeq_var _var_type;
    inline PolicyValueSeq() {}
    inline PolicyValueSeq(const PolicyValueSeq& _s)
      : _CORBA_Unbounded_Sequence< PolicyValue > (_s) {}

    inline PolicyValueSeq(_CORBA_ULong _max)
      : _CORBA_Unbounded_Sequence< PolicyValue > (_max) {}
    inline PolicyValueSeq(_CORBA_ULong _max, _CORBA_ULong _len, PolicyValue* _val, _CORBA_Boolean _rel=0)
      : _CORBA_Unbounded_Sequence< PolicyValue > (_max, _len, _val, _rel) {}

  

    inline PolicyValueSeq& operator = (const PolicyValueSeq& _s) {
      _CORBA_Unbounded_Sequence< PolicyValue > ::operator=(_s);
      return *this;
    }
  };

  class PolicyValueSeq_out;

  class PolicyValueSeq_var {
  public:
    inline PolicyValueSeq_var() : _pd_seq(0) {}
    inline PolicyValueSeq_var(PolicyValueSeq* _s) : _pd_seq(_s) {}
    inline PolicyValueSeq_var(const PolicyValueSeq_var& _s) {
      if (_s._pd_seq)  _pd_seq = new PolicyValueSeq(*_s._pd_seq);
      else             _pd_seq = 0;
    }
    inline ~PolicyValueSeq_var() { if (_pd_seq)  delete _pd_seq; }
      
    inline PolicyValueSeq_var& operator = (PolicyValueSeq* _s) {
      if (_pd_seq)  delete _pd_seq;
      _pd_seq = _s;
      return *this;
    }
    inline PolicyValueSeq_var& operator = (const PolicyValueSeq_var& _s) {
      if (&_s != this) {
        if (_s._pd_seq) {
          if (!_pd_seq)  _pd_seq = new PolicyValueSeq;
          *_pd_seq = *_s._pd_seq;
        }
        else if (_pd_seq) {
          delete _pd_seq;
          _pd_seq = 0;
        }
      }
      return *this;
    }
    inline PolicyValue& operator [] (_CORBA_ULong _s) {
      return (*_pd_seq)[_s];
    }

  

    inline PolicyValueSeq* operator -> () { return _pd_seq; }
    inline const PolicyValueSeq* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
    inline operator PolicyValueSeq& () const { return *_pd_seq; }
#else
    inline operator const PolicyValueSeq& () const { return *_pd_seq; }
    inline operator PolicyValueSeq& () { return *_pd_seq; }
#endif
      
    inline const PolicyValueSeq& in() const { return *_pd_seq; }
    inline PolicyValueSeq&       inout()    { return *_pd_seq; }
    inline PolicyValueSeq*&      out() {
      if (_pd_seq) { delete _pd_seq; _pd_seq = 0; }
      return _pd_seq;
    }
    inline PolicyValueSeq* _retn() { PolicyValueSeq* tmp = _pd_seq; _pd_seq = 0; return tmp; }
      
    friend class PolicyValueSeq_out;
    
  private:
    PolicyValueSeq* _pd_seq;
  };

  class PolicyValueSeq_out {
  public:
    inline PolicyValueSeq_out(PolicyValueSeq*& _s) : _data(_s) { _data = 0; }
    inline PolicyValueSeq_out(PolicyValueSeq_var& _s)
      : _data(_s._pd_seq) { _s = (PolicyValueSeq*) 0; }
    inline PolicyValueSeq_out(const PolicyValueSeq_out& _s) : _data(_s._data) {}
    inline PolicyValueSeq_out& operator = (const PolicyValueSeq_out& _s) {
      _data = _s._data;
      return *this;
    }
    inline PolicyValueSeq_out& operator = (PolicyValueSeq* _s) {
      _data = _s;
      return *this;
    }
    inline operator PolicyValueSeq*&()  { return _data; }
    inline PolicyValueSeq*& ptr()       { return _data; }
    inline PolicyValueSeq* operator->() { return _data; }

    inline PolicyValue& operator [] (_CORBA_ULong _i) {
      return (*_data)[_i];
    }

  

    PolicyValueSeq*& _data;

  private:
    PolicyValueSeq_out();
    PolicyValueSeq_out& operator=(const PolicyValueSeq_var&);
  };

_CORBA_MODULE_END



_CORBA_MODULE POA_Messaging
_CORBA_MODULE_BEG

_CORBA_MODULE_END



_CORBA_MODULE OBV_Messaging
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr





#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_messaging__policy
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_messaging__policy
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_messaging__policy
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_messaging__policy
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_messaging__policy
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_messaging__policy
#endif

#endif  // __messaging__policy_hh__

