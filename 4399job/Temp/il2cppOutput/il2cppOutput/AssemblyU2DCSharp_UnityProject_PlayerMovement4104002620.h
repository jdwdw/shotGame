#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t792326996;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Coroutine
struct Coroutine_t2246592261;
struct Coroutine_t2246592261_marshaled;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityProject.PlayerMovement
struct  PlayerMovement_t4104002620  : public MonoBehaviour_t3012272455
{
public:
	// System.Single UnityProject.PlayerMovement::speed
	float ___speed_2;
	// UnityEngine.Vector3 UnityProject.PlayerMovement::movement
	Vector3_t3525329789  ___movement_3;
	// UnityEngine.Animator UnityProject.PlayerMovement::anim
	Animator_t792326996 * ___anim_4;
	// UnityEngine.Rigidbody UnityProject.PlayerMovement::rb
	Rigidbody_t1972007546 * ___rb_5;
	// System.Int32 UnityProject.PlayerMovement::floorMask
	int32_t ___floorMask_6;
	// System.Single UnityProject.PlayerMovement::camRayLength
	float ___camRayLength_7;
	// UnityEngine.GameObject UnityProject.PlayerMovement::player
	GameObject_t4012695102 * ___player_8;
	// UnityEngine.Vector3 UnityProject.PlayerMovement::direction
	Vector3_t3525329789  ___direction_9;
	// UnityEngine.Quaternion UnityProject.PlayerMovement::quaternion
	Quaternion_t1891715979  ___quaternion_10;
	// UnityEngine.Vector3 UnityProject.PlayerMovement::quaternionDirection
	Vector3_t3525329789  ___quaternionDirection_11;
	// UnityEngine.Coroutine UnityProject.PlayerMovement::cououtine
	Coroutine_t2246592261 * ___cououtine_12;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(PlayerMovement_t4104002620, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_movement_3() { return static_cast<int32_t>(offsetof(PlayerMovement_t4104002620, ___movement_3)); }
	inline Vector3_t3525329789  get_movement_3() const { return ___movement_3; }
	inline Vector3_t3525329789 * get_address_of_movement_3() { return &___movement_3; }
	inline void set_movement_3(Vector3_t3525329789  value)
	{
		___movement_3 = value;
	}

	inline static int32_t get_offset_of_anim_4() { return static_cast<int32_t>(offsetof(PlayerMovement_t4104002620, ___anim_4)); }
	inline Animator_t792326996 * get_anim_4() const { return ___anim_4; }
	inline Animator_t792326996 ** get_address_of_anim_4() { return &___anim_4; }
	inline void set_anim_4(Animator_t792326996 * value)
	{
		___anim_4 = value;
		Il2CppCodeGenWriteBarrier(&___anim_4, value);
	}

	inline static int32_t get_offset_of_rb_5() { return static_cast<int32_t>(offsetof(PlayerMovement_t4104002620, ___rb_5)); }
	inline Rigidbody_t1972007546 * get_rb_5() const { return ___rb_5; }
	inline Rigidbody_t1972007546 ** get_address_of_rb_5() { return &___rb_5; }
	inline void set_rb_5(Rigidbody_t1972007546 * value)
	{
		___rb_5 = value;
		Il2CppCodeGenWriteBarrier(&___rb_5, value);
	}

	inline static int32_t get_offset_of_floorMask_6() { return static_cast<int32_t>(offsetof(PlayerMovement_t4104002620, ___floorMask_6)); }
	inline int32_t get_floorMask_6() const { return ___floorMask_6; }
	inline int32_t* get_address_of_floorMask_6() { return &___floorMask_6; }
	inline void set_floorMask_6(int32_t value)
	{
		___floorMask_6 = value;
	}

	inline static int32_t get_offset_of_camRayLength_7() { return static_cast<int32_t>(offsetof(PlayerMovement_t4104002620, ___camRayLength_7)); }
	inline float get_camRayLength_7() const { return ___camRayLength_7; }
	inline float* get_address_of_camRayLength_7() { return &___camRayLength_7; }
	inline void set_camRayLength_7(float value)
	{
		___camRayLength_7 = value;
	}

	inline static int32_t get_offset_of_player_8() { return static_cast<int32_t>(offsetof(PlayerMovement_t4104002620, ___player_8)); }
	inline GameObject_t4012695102 * get_player_8() const { return ___player_8; }
	inline GameObject_t4012695102 ** get_address_of_player_8() { return &___player_8; }
	inline void set_player_8(GameObject_t4012695102 * value)
	{
		___player_8 = value;
		Il2CppCodeGenWriteBarrier(&___player_8, value);
	}

	inline static int32_t get_offset_of_direction_9() { return static_cast<int32_t>(offsetof(PlayerMovement_t4104002620, ___direction_9)); }
	inline Vector3_t3525329789  get_direction_9() const { return ___direction_9; }
	inline Vector3_t3525329789 * get_address_of_direction_9() { return &___direction_9; }
	inline void set_direction_9(Vector3_t3525329789  value)
	{
		___direction_9 = value;
	}

	inline static int32_t get_offset_of_quaternion_10() { return static_cast<int32_t>(offsetof(PlayerMovement_t4104002620, ___quaternion_10)); }
	inline Quaternion_t1891715979  get_quaternion_10() const { return ___quaternion_10; }
	inline Quaternion_t1891715979 * get_address_of_quaternion_10() { return &___quaternion_10; }
	inline void set_quaternion_10(Quaternion_t1891715979  value)
	{
		___quaternion_10 = value;
	}

	inline static int32_t get_offset_of_quaternionDirection_11() { return static_cast<int32_t>(offsetof(PlayerMovement_t4104002620, ___quaternionDirection_11)); }
	inline Vector3_t3525329789  get_quaternionDirection_11() const { return ___quaternionDirection_11; }
	inline Vector3_t3525329789 * get_address_of_quaternionDirection_11() { return &___quaternionDirection_11; }
	inline void set_quaternionDirection_11(Vector3_t3525329789  value)
	{
		___quaternionDirection_11 = value;
	}

	inline static int32_t get_offset_of_cououtine_12() { return static_cast<int32_t>(offsetof(PlayerMovement_t4104002620, ___cououtine_12)); }
	inline Coroutine_t2246592261 * get_cououtine_12() const { return ___cououtine_12; }
	inline Coroutine_t2246592261 ** get_address_of_cououtine_12() { return &___cououtine_12; }
	inline void set_cououtine_12(Coroutine_t2246592261 * value)
	{
		___cououtine_12 = value;
		Il2CppCodeGenWriteBarrier(&___cououtine_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
