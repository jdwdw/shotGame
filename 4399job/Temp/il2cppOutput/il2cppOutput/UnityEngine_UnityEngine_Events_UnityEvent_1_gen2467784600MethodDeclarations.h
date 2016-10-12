#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>
struct UnityEvent_1_t2467784600;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector3>
struct UnityAction_1_t3505791694;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1733537956;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::.ctor()
extern "C"  void UnityEvent_1__ctor_m3935009870_gshared (UnityEvent_1_t2467784600 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m3935009870(__this, method) ((  void (*) (UnityEvent_1_t2467784600 *, const MethodInfo*))UnityEvent_1__ctor_m3935009870_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  void UnityEvent_1_AddListener_m2644241798_gshared (UnityEvent_1_t2467784600 * __this, UnityAction_1_t3505791694 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m2644241798(__this, ___call, method) ((  void (*) (UnityEvent_1_t2467784600 *, UnityAction_1_t3505791694 *, const MethodInfo*))UnityEvent_1_AddListener_m2644241798_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  void UnityEvent_1_RemoveListener_m2746342017_gshared (UnityEvent_1_t2467784600 * __this, UnityAction_1_t3505791694 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m2746342017(__this, ___call, method) ((  void (*) (UnityEvent_1_t2467784600 *, UnityAction_1_t3505791694 *, const MethodInfo*))UnityEvent_1_RemoveListener_m2746342017_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::FindMethod_Impl(System.String,System.Object)
extern "C"  MethodInfo_t * UnityEvent_1_FindMethod_Impl_m606274546_gshared (UnityEvent_1_t2467784600 * __this, String_t* ___name, Il2CppObject * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m606274546(__this, ___name, ___targetObj, method) ((  MethodInfo_t * (*) (UnityEvent_1_t2467784600 *, String_t*, Il2CppObject *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m606274546_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C"  BaseInvokableCall_t1733537956 * UnityEvent_1_GetDelegate_m1327259510_gshared (UnityEvent_1_t2467784600 * __this, Il2CppObject * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m1327259510(__this, ___target, ___theFunction, method) ((  BaseInvokableCall_t1733537956 * (*) (UnityEvent_1_t2467784600 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m1327259510_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  BaseInvokableCall_t1733537956 * UnityEvent_1_GetDelegate_m437362323_gshared (Il2CppObject * __this /* static, unused */, UnityAction_1_t3505791694 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m437362323(__this /* static, unused */, ___action, method) ((  BaseInvokableCall_t1733537956 * (*) (Il2CppObject * /* static, unused */, UnityAction_1_t3505791694 *, const MethodInfo*))UnityEvent_1_GetDelegate_m437362323_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::Invoke(T0)
extern "C"  void UnityEvent_1_Invoke_m670187743_gshared (UnityEvent_1_t2467784600 * __this, Vector3_t3525329789  ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m670187743(__this, ___arg0, method) ((  void (*) (UnityEvent_1_t2467784600 *, Vector3_t3525329789 , const MethodInfo*))UnityEvent_1_Invoke_m670187743_gshared)(__this, ___arg0, method)
