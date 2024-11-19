// This file is generated by omniidl (C++ backend)- omniORB_4_3. Do not edit.
#ifndef __poa_enums_operators_hh__
#define __poa_enums_operators_hh__

inline void operator >>=(PortableServer::ThreadPolicyValue _e, cdrStream& s) {
  ::operator>>=((::CORBA::ULong)_e, s);
}

inline void operator <<= (PortableServer::ThreadPolicyValue& _e, cdrStream& s) {
  ::CORBA::ULong _0RL_e;
  ::operator<<=(_0RL_e,s);
  if (_0RL_e <= PortableServer::MAIN_THREAD_MODEL) {
    _e = (PortableServer::ThreadPolicyValue) _0RL_e;
  }
  else {
    OMNIORB_THROW(MARSHAL,_OMNI_NS(MARSHAL_InvalidEnumValue),
                  (::CORBA::CompletionStatus)s.completion());
  }
}

void operator<<=(::CORBA::Any& _a, PortableServer::ThreadPolicyValue _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, PortableServer::ThreadPolicyValue& _s);

inline void operator >>=(PortableServer::LifespanPolicyValue _e, cdrStream& s) {
  ::operator>>=((::CORBA::ULong)_e, s);
}

inline void operator <<= (PortableServer::LifespanPolicyValue& _e, cdrStream& s) {
  ::CORBA::ULong _0RL_e;
  ::operator<<=(_0RL_e,s);
  if (_0RL_e <= PortableServer::PERSISTENT) {
    _e = (PortableServer::LifespanPolicyValue) _0RL_e;
  }
  else {
    OMNIORB_THROW(MARSHAL,_OMNI_NS(MARSHAL_InvalidEnumValue),
                  (::CORBA::CompletionStatus)s.completion());
  }
}

void operator<<=(::CORBA::Any& _a, PortableServer::LifespanPolicyValue _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, PortableServer::LifespanPolicyValue& _s);

inline void operator >>=(PortableServer::IdUniquenessPolicyValue _e, cdrStream& s) {
  ::operator>>=((::CORBA::ULong)_e, s);
}

inline void operator <<= (PortableServer::IdUniquenessPolicyValue& _e, cdrStream& s) {
  ::CORBA::ULong _0RL_e;
  ::operator<<=(_0RL_e,s);
  if (_0RL_e <= PortableServer::MULTIPLE_ID) {
    _e = (PortableServer::IdUniquenessPolicyValue) _0RL_e;
  }
  else {
    OMNIORB_THROW(MARSHAL,_OMNI_NS(MARSHAL_InvalidEnumValue),
                  (::CORBA::CompletionStatus)s.completion());
  }
}

void operator<<=(::CORBA::Any& _a, PortableServer::IdUniquenessPolicyValue _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, PortableServer::IdUniquenessPolicyValue& _s);

inline void operator >>=(PortableServer::IdAssignmentPolicyValue _e, cdrStream& s) {
  ::operator>>=((::CORBA::ULong)_e, s);
}

inline void operator <<= (PortableServer::IdAssignmentPolicyValue& _e, cdrStream& s) {
  ::CORBA::ULong _0RL_e;
  ::operator<<=(_0RL_e,s);
  if (_0RL_e <= PortableServer::SYSTEM_ID) {
    _e = (PortableServer::IdAssignmentPolicyValue) _0RL_e;
  }
  else {
    OMNIORB_THROW(MARSHAL,_OMNI_NS(MARSHAL_InvalidEnumValue),
                  (::CORBA::CompletionStatus)s.completion());
  }
}

void operator<<=(::CORBA::Any& _a, PortableServer::IdAssignmentPolicyValue _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, PortableServer::IdAssignmentPolicyValue& _s);

inline void operator >>=(PortableServer::ImplicitActivationPolicyValue _e, cdrStream& s) {
  ::operator>>=((::CORBA::ULong)_e, s);
}

inline void operator <<= (PortableServer::ImplicitActivationPolicyValue& _e, cdrStream& s) {
  ::CORBA::ULong _0RL_e;
  ::operator<<=(_0RL_e,s);
  if (_0RL_e <= PortableServer::NO_IMPLICIT_ACTIVATION) {
    _e = (PortableServer::ImplicitActivationPolicyValue) _0RL_e;
  }
  else {
    OMNIORB_THROW(MARSHAL,_OMNI_NS(MARSHAL_InvalidEnumValue),
                  (::CORBA::CompletionStatus)s.completion());
  }
}

void operator<<=(::CORBA::Any& _a, PortableServer::ImplicitActivationPolicyValue _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, PortableServer::ImplicitActivationPolicyValue& _s);

inline void operator >>=(PortableServer::ServantRetentionPolicyValue _e, cdrStream& s) {
  ::operator>>=((::CORBA::ULong)_e, s);
}

inline void operator <<= (PortableServer::ServantRetentionPolicyValue& _e, cdrStream& s) {
  ::CORBA::ULong _0RL_e;
  ::operator<<=(_0RL_e,s);
  if (_0RL_e <= PortableServer::NON_RETAIN) {
    _e = (PortableServer::ServantRetentionPolicyValue) _0RL_e;
  }
  else {
    OMNIORB_THROW(MARSHAL,_OMNI_NS(MARSHAL_InvalidEnumValue),
                  (::CORBA::CompletionStatus)s.completion());
  }
}

void operator<<=(::CORBA::Any& _a, PortableServer::ServantRetentionPolicyValue _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, PortableServer::ServantRetentionPolicyValue& _s);

inline void operator >>=(PortableServer::RequestProcessingPolicyValue _e, cdrStream& s) {
  ::operator>>=((::CORBA::ULong)_e, s);
}

inline void operator <<= (PortableServer::RequestProcessingPolicyValue& _e, cdrStream& s) {
  ::CORBA::ULong _0RL_e;
  ::operator<<=(_0RL_e,s);
  if (_0RL_e <= PortableServer::USE_SERVANT_MANAGER) {
    _e = (PortableServer::RequestProcessingPolicyValue) _0RL_e;
  }
  else {
    OMNIORB_THROW(MARSHAL,_OMNI_NS(MARSHAL_InvalidEnumValue),
                  (::CORBA::CompletionStatus)s.completion());
  }
}

void operator<<=(::CORBA::Any& _a, PortableServer::RequestProcessingPolicyValue _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, PortableServer::RequestProcessingPolicyValue& _s);

#endif
