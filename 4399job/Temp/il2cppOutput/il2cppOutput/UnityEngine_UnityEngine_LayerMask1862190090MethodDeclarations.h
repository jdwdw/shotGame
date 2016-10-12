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

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t2956870243;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_LayerMask1862190090.h"

// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
extern "C"  int32_t LayerMask_NameToLayer_m170005213 (Il2CppObject * __this /* static, unused */, String_t* ___layerName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.LayerMask::GetMask(System.String[])
extern "C"  int32_t LayerMask_GetMask_m500679236 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t2956870243* ___layerNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
extern "C"  int32_t LayerMask_op_Implicit_m1595580047 (Il2CppObject * __this /* static, unused */, LayerMask_t1862190090  ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
extern "C"  LayerMask_t1862190090  LayerMask_op_Implicit_m2608572187 (Il2CppObject * __this /* static, unused */, int32_t ___intVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct LayerMask_t1862190090;
struct LayerMask_t1862190090_marshaled;

extern "C" void LayerMask_t1862190090_marshal(const LayerMask_t1862190090& unmarshaled, LayerMask_t1862190090_marshaled& marshaled);
extern "C" void LayerMask_t1862190090_marshal_back(const LayerMask_t1862190090_marshaled& marshaled, LayerMask_t1862190090& unmarshaled);
extern "C" void LayerMask_t1862190090_marshal_cleanup(LayerMask_t1862190090_marshaled& marshaled);
