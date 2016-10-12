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

// UnityProject.PlayerMovement
struct PlayerMovement_t4104002620;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void UnityProject.PlayerMovement::.ctor()
extern "C"  void PlayerMovement__ctor_m1940446385 (PlayerMovement_t4104002620 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityProject.PlayerMovement::Awake()
extern "C"  void PlayerMovement_Awake_m2178051604 (PlayerMovement_t4104002620 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityProject.PlayerMovement::FixedUpdate()
extern "C"  void PlayerMovement_FixedUpdate_m1506586988 (PlayerMovement_t4104002620 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityProject.PlayerMovement::Move(System.Single,System.Single)
extern "C"  void PlayerMovement_Move_m166011084 (PlayerMovement_t4104002620 * __this, float ___h, float ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityProject.PlayerMovement::Turning()
extern "C"  void PlayerMovement_Turning_m285389652 (PlayerMovement_t4104002620 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityProject.PlayerMovement::Wait(System.Single)
extern "C"  Il2CppObject * PlayerMovement_Wait_m2834096715 (PlayerMovement_t4104002620 * __this, float ___waitTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityProject.PlayerMovement::Animating(System.Single,System.Single)
extern "C"  void PlayerMovement_Animating_m361962115 (PlayerMovement_t4104002620 * __this, float ___h, float ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityProject.PlayerMovement::BeginMove()
extern "C"  void PlayerMovement_BeginMove_m2296723561 (PlayerMovement_t4104002620 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityProject.PlayerMovement::EndMove()
extern "C"  void PlayerMovement_EndMove_m1833498267 (PlayerMovement_t4104002620 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityProject.PlayerMovement::UpdateDirection(UnityEngine.Vector3)
extern "C"  void PlayerMovement_UpdateDirection_m3785894964 (PlayerMovement_t4104002620 * __this, Vector3_t3525329789  ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityProject.PlayerMovement::resetDirection()
extern "C"  void PlayerMovement_resetDirection_m1188668099 (PlayerMovement_t4104002620 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityProject.PlayerMovement::BeginTurning()
extern "C"  void PlayerMovement_BeginTurning_m1732060879 (PlayerMovement_t4104002620 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityProject.PlayerMovement::EndTurning()
extern "C"  void PlayerMovement_EndTurning_m1517249373 (PlayerMovement_t4104002620 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityProject.PlayerMovement::UpdateTurning(UnityEngine.Vector3)
extern "C"  void PlayerMovement_UpdateTurning_m272526318 (PlayerMovement_t4104002620 * __this, Vector3_t3525329789  ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
