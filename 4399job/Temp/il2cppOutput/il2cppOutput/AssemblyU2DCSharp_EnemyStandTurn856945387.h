#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyStandTurn
struct  EnemyStandTurn_t856945387  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Transform EnemyStandTurn::player
	Transform_t284553113 * ___player_2;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(EnemyStandTurn_t856945387, ___player_2)); }
	inline Transform_t284553113 * get_player_2() const { return ___player_2; }
	inline Transform_t284553113 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(Transform_t284553113 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
