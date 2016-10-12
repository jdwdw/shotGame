#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// UnityProject.PlayerMovement
struct PlayerMovement_t4104002620;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Ray1522967639.h"
#include "UnityEngine_UnityEngine_RaycastHit46221527.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityProject.PlayerMovement/<Wait>c__Iterator1
struct  U3CWaitU3Ec__Iterator1_t3451088973  : public Il2CppObject
{
public:
	// System.Single UnityProject.PlayerMovement/<Wait>c__Iterator1::waitTime
	float ___waitTime_0;
	// UnityEngine.Ray UnityProject.PlayerMovement/<Wait>c__Iterator1::<camRay>__0
	Ray_t1522967639  ___U3CcamRayU3E__0_1;
	// UnityEngine.RaycastHit UnityProject.PlayerMovement/<Wait>c__Iterator1::<floorHit>__1
	RaycastHit_t46221527  ___U3CfloorHitU3E__1_2;
	// UnityEngine.Vector3 UnityProject.PlayerMovement/<Wait>c__Iterator1::<playerToMouse>__2
	Vector3_t3525329789  ___U3CplayerToMouseU3E__2_3;
	// UnityEngine.Quaternion UnityProject.PlayerMovement/<Wait>c__Iterator1::<newRotation>__3
	Quaternion_t1891715979  ___U3CnewRotationU3E__3_4;
	// System.Int32 UnityProject.PlayerMovement/<Wait>c__Iterator1::$PC
	int32_t ___U24PC_5;
	// System.Object UnityProject.PlayerMovement/<Wait>c__Iterator1::$current
	Il2CppObject * ___U24current_6;
	// System.Single UnityProject.PlayerMovement/<Wait>c__Iterator1::<$>waitTime
	float ___U3CU24U3EwaitTime_7;
	// UnityProject.PlayerMovement UnityProject.PlayerMovement/<Wait>c__Iterator1::<>f__this
	PlayerMovement_t4104002620 * ___U3CU3Ef__this_8;

public:
	inline static int32_t get_offset_of_waitTime_0() { return static_cast<int32_t>(offsetof(U3CWaitU3Ec__Iterator1_t3451088973, ___waitTime_0)); }
	inline float get_waitTime_0() const { return ___waitTime_0; }
	inline float* get_address_of_waitTime_0() { return &___waitTime_0; }
	inline void set_waitTime_0(float value)
	{
		___waitTime_0 = value;
	}

	inline static int32_t get_offset_of_U3CcamRayU3E__0_1() { return static_cast<int32_t>(offsetof(U3CWaitU3Ec__Iterator1_t3451088973, ___U3CcamRayU3E__0_1)); }
	inline Ray_t1522967639  get_U3CcamRayU3E__0_1() const { return ___U3CcamRayU3E__0_1; }
	inline Ray_t1522967639 * get_address_of_U3CcamRayU3E__0_1() { return &___U3CcamRayU3E__0_1; }
	inline void set_U3CcamRayU3E__0_1(Ray_t1522967639  value)
	{
		___U3CcamRayU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CfloorHitU3E__1_2() { return static_cast<int32_t>(offsetof(U3CWaitU3Ec__Iterator1_t3451088973, ___U3CfloorHitU3E__1_2)); }
	inline RaycastHit_t46221527  get_U3CfloorHitU3E__1_2() const { return ___U3CfloorHitU3E__1_2; }
	inline RaycastHit_t46221527 * get_address_of_U3CfloorHitU3E__1_2() { return &___U3CfloorHitU3E__1_2; }
	inline void set_U3CfloorHitU3E__1_2(RaycastHit_t46221527  value)
	{
		___U3CfloorHitU3E__1_2 = value;
	}

	inline static int32_t get_offset_of_U3CplayerToMouseU3E__2_3() { return static_cast<int32_t>(offsetof(U3CWaitU3Ec__Iterator1_t3451088973, ___U3CplayerToMouseU3E__2_3)); }
	inline Vector3_t3525329789  get_U3CplayerToMouseU3E__2_3() const { return ___U3CplayerToMouseU3E__2_3; }
	inline Vector3_t3525329789 * get_address_of_U3CplayerToMouseU3E__2_3() { return &___U3CplayerToMouseU3E__2_3; }
	inline void set_U3CplayerToMouseU3E__2_3(Vector3_t3525329789  value)
	{
		___U3CplayerToMouseU3E__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CnewRotationU3E__3_4() { return static_cast<int32_t>(offsetof(U3CWaitU3Ec__Iterator1_t3451088973, ___U3CnewRotationU3E__3_4)); }
	inline Quaternion_t1891715979  get_U3CnewRotationU3E__3_4() const { return ___U3CnewRotationU3E__3_4; }
	inline Quaternion_t1891715979 * get_address_of_U3CnewRotationU3E__3_4() { return &___U3CnewRotationU3E__3_4; }
	inline void set_U3CnewRotationU3E__3_4(Quaternion_t1891715979  value)
	{
		___U3CnewRotationU3E__3_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CWaitU3Ec__Iterator1_t3451088973, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}

	inline static int32_t get_offset_of_U24current_6() { return static_cast<int32_t>(offsetof(U3CWaitU3Ec__Iterator1_t3451088973, ___U24current_6)); }
	inline Il2CppObject * get_U24current_6() const { return ___U24current_6; }
	inline Il2CppObject ** get_address_of_U24current_6() { return &___U24current_6; }
	inline void set_U24current_6(Il2CppObject * value)
	{
		___U24current_6 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_6, value);
	}

	inline static int32_t get_offset_of_U3CU24U3EwaitTime_7() { return static_cast<int32_t>(offsetof(U3CWaitU3Ec__Iterator1_t3451088973, ___U3CU24U3EwaitTime_7)); }
	inline float get_U3CU24U3EwaitTime_7() const { return ___U3CU24U3EwaitTime_7; }
	inline float* get_address_of_U3CU24U3EwaitTime_7() { return &___U3CU24U3EwaitTime_7; }
	inline void set_U3CU24U3EwaitTime_7(float value)
	{
		___U3CU24U3EwaitTime_7 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_8() { return static_cast<int32_t>(offsetof(U3CWaitU3Ec__Iterator1_t3451088973, ___U3CU3Ef__this_8)); }
	inline PlayerMovement_t4104002620 * get_U3CU3Ef__this_8() const { return ___U3CU3Ef__this_8; }
	inline PlayerMovement_t4104002620 ** get_address_of_U3CU3Ef__this_8() { return &___U3CU3Ef__this_8; }
	inline void set_U3CU3Ef__this_8(PlayerMovement_t4104002620 * value)
	{
		___U3CU3Ef__this_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
