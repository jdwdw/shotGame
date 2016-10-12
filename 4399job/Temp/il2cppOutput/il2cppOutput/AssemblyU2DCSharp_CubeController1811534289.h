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
// CubeController/AnimatorParameters
struct AnimatorParameters_t934826065;
// UnityEngine.Coroutine
struct Coroutine_t2246592261;
struct Coroutine_t2246592261_marshaled;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CubeController
struct  CubeController_t1811534289  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Animator CubeController::target
	Animator_t792326996 * ___target_2;
	// System.Single CubeController::speed
	float ___speed_3;
	// CubeController/AnimatorParameters CubeController::parameters
	AnimatorParameters_t934826065 * ___parameters_4;
	// UnityEngine.Vector3 CubeController::direction
	Vector3_t3525329789  ___direction_5;
	// UnityEngine.Coroutine CubeController::cououtine
	Coroutine_t2246592261 * ___cououtine_6;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(CubeController_t1811534289, ___target_2)); }
	inline Animator_t792326996 * get_target_2() const { return ___target_2; }
	inline Animator_t792326996 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Animator_t792326996 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(CubeController_t1811534289, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_parameters_4() { return static_cast<int32_t>(offsetof(CubeController_t1811534289, ___parameters_4)); }
	inline AnimatorParameters_t934826065 * get_parameters_4() const { return ___parameters_4; }
	inline AnimatorParameters_t934826065 ** get_address_of_parameters_4() { return &___parameters_4; }
	inline void set_parameters_4(AnimatorParameters_t934826065 * value)
	{
		___parameters_4 = value;
		Il2CppCodeGenWriteBarrier(&___parameters_4, value);
	}

	inline static int32_t get_offset_of_direction_5() { return static_cast<int32_t>(offsetof(CubeController_t1811534289, ___direction_5)); }
	inline Vector3_t3525329789  get_direction_5() const { return ___direction_5; }
	inline Vector3_t3525329789 * get_address_of_direction_5() { return &___direction_5; }
	inline void set_direction_5(Vector3_t3525329789  value)
	{
		___direction_5 = value;
	}

	inline static int32_t get_offset_of_cououtine_6() { return static_cast<int32_t>(offsetof(CubeController_t1811534289, ___cououtine_6)); }
	inline Coroutine_t2246592261 * get_cououtine_6() const { return ___cououtine_6; }
	inline Coroutine_t2246592261 ** get_address_of_cououtine_6() { return &___cououtine_6; }
	inline void set_cououtine_6(Coroutine_t2246592261 * value)
	{
		___cououtine_6 = value;
		Il2CppCodeGenWriteBarrier(&___cououtine_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
