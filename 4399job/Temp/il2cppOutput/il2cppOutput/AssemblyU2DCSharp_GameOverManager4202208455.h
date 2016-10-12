#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PlayerHealth
struct PlayerHealth_t3877793981;
// UnityEngine.Animator
struct Animator_t792326996;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameOverManager
struct  GameOverManager_t4202208455  : public MonoBehaviour_t3012272455
{
public:
	// PlayerHealth GameOverManager::playerHealth
	PlayerHealth_t3877793981 * ___playerHealth_2;
	// System.Single GameOverManager::restartDelay
	float ___restartDelay_3;
	// UnityEngine.Animator GameOverManager::anim
	Animator_t792326996 * ___anim_4;
	// System.Single GameOverManager::restartTimer
	float ___restartTimer_5;

public:
	inline static int32_t get_offset_of_playerHealth_2() { return static_cast<int32_t>(offsetof(GameOverManager_t4202208455, ___playerHealth_2)); }
	inline PlayerHealth_t3877793981 * get_playerHealth_2() const { return ___playerHealth_2; }
	inline PlayerHealth_t3877793981 ** get_address_of_playerHealth_2() { return &___playerHealth_2; }
	inline void set_playerHealth_2(PlayerHealth_t3877793981 * value)
	{
		___playerHealth_2 = value;
		Il2CppCodeGenWriteBarrier(&___playerHealth_2, value);
	}

	inline static int32_t get_offset_of_restartDelay_3() { return static_cast<int32_t>(offsetof(GameOverManager_t4202208455, ___restartDelay_3)); }
	inline float get_restartDelay_3() const { return ___restartDelay_3; }
	inline float* get_address_of_restartDelay_3() { return &___restartDelay_3; }
	inline void set_restartDelay_3(float value)
	{
		___restartDelay_3 = value;
	}

	inline static int32_t get_offset_of_anim_4() { return static_cast<int32_t>(offsetof(GameOverManager_t4202208455, ___anim_4)); }
	inline Animator_t792326996 * get_anim_4() const { return ___anim_4; }
	inline Animator_t792326996 ** get_address_of_anim_4() { return &___anim_4; }
	inline void set_anim_4(Animator_t792326996 * value)
	{
		___anim_4 = value;
		Il2CppCodeGenWriteBarrier(&___anim_4, value);
	}

	inline static int32_t get_offset_of_restartTimer_5() { return static_cast<int32_t>(offsetof(GameOverManager_t4202208455, ___restartTimer_5)); }
	inline float get_restartTimer_5() const { return ___restartTimer_5; }
	inline float* get_address_of_restartTimer_5() { return &___restartTimer_5; }
	inline void set_restartTimer_5(float value)
	{
		___restartTimer_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
