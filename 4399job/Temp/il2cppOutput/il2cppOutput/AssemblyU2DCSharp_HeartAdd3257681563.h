#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// PlayerHealth
struct PlayerHealth_t3877793981;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HeartAdd
struct  HeartAdd_t3257681563  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject HeartAdd::player
	GameObject_t4012695102 * ___player_2;
	// PlayerHealth HeartAdd::playerHealth
	PlayerHealth_t3877793981 * ___playerHealth_3;
	// System.Int32 HeartAdd::HeartCount
	int32_t ___HeartCount_4;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(HeartAdd_t3257681563, ___player_2)); }
	inline GameObject_t4012695102 * get_player_2() const { return ___player_2; }
	inline GameObject_t4012695102 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t4012695102 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_playerHealth_3() { return static_cast<int32_t>(offsetof(HeartAdd_t3257681563, ___playerHealth_3)); }
	inline PlayerHealth_t3877793981 * get_playerHealth_3() const { return ___playerHealth_3; }
	inline PlayerHealth_t3877793981 ** get_address_of_playerHealth_3() { return &___playerHealth_3; }
	inline void set_playerHealth_3(PlayerHealth_t3877793981 * value)
	{
		___playerHealth_3 = value;
		Il2CppCodeGenWriteBarrier(&___playerHealth_3, value);
	}

	inline static int32_t get_offset_of_HeartCount_4() { return static_cast<int32_t>(offsetof(HeartAdd_t3257681563, ___HeartCount_4)); }
	inline int32_t get_HeartCount_4() const { return ___HeartCount_4; }
	inline int32_t* get_address_of_HeartCount_4() { return &___HeartCount_4; }
	inline void set_HeartCount_4(int32_t value)
	{
		___HeartCount_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
