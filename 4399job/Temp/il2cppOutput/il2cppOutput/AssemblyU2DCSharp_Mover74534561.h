#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mover
struct  Mover_t74534561  : public MonoBehaviour_t3012272455
{
public:
	// System.Single Mover::speed
	float ___speed_2;
	// System.Single Mover::destroyTime
	float ___destroyTime_3;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(Mover_t74534561, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_destroyTime_3() { return static_cast<int32_t>(offsetof(Mover_t74534561, ___destroyTime_3)); }
	inline float get_destroyTime_3() const { return ___destroyTime_3; }
	inline float* get_address_of_destroyTime_3() { return &___destroyTime_3; }
	inline void set_destroyTime_3(float value)
	{
		___destroyTime_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
