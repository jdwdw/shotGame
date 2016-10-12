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
// UnityEngine.GameObject
struct GameObject_t4012695102;
// PlayerHealth
struct PlayerHealth_t3877793981;
// EnemyHealth
struct EnemyHealth_t1417584612;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DestroyByContactEnemyShot
struct  DestroyByContactEnemyShot_t1776741971  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 DestroyByContactEnemyShot::damagePerShot
	int32_t ___damagePerShot_2;
	// UnityEngine.Animator DestroyByContactEnemyShot::anim
	Animator_t792326996 * ___anim_3;
	// UnityEngine.GameObject DestroyByContactEnemyShot::player
	GameObject_t4012695102 * ___player_4;
	// PlayerHealth DestroyByContactEnemyShot::playerHealth
	PlayerHealth_t3877793981 * ___playerHealth_5;
	// EnemyHealth DestroyByContactEnemyShot::enemyHealth
	EnemyHealth_t1417584612 * ___enemyHealth_6;
	// System.Boolean DestroyByContactEnemyShot::playerInRange
	bool ___playerInRange_7;
	// System.Single DestroyByContactEnemyShot::timer
	float ___timer_8;

public:
	inline static int32_t get_offset_of_damagePerShot_2() { return static_cast<int32_t>(offsetof(DestroyByContactEnemyShot_t1776741971, ___damagePerShot_2)); }
	inline int32_t get_damagePerShot_2() const { return ___damagePerShot_2; }
	inline int32_t* get_address_of_damagePerShot_2() { return &___damagePerShot_2; }
	inline void set_damagePerShot_2(int32_t value)
	{
		___damagePerShot_2 = value;
	}

	inline static int32_t get_offset_of_anim_3() { return static_cast<int32_t>(offsetof(DestroyByContactEnemyShot_t1776741971, ___anim_3)); }
	inline Animator_t792326996 * get_anim_3() const { return ___anim_3; }
	inline Animator_t792326996 ** get_address_of_anim_3() { return &___anim_3; }
	inline void set_anim_3(Animator_t792326996 * value)
	{
		___anim_3 = value;
		Il2CppCodeGenWriteBarrier(&___anim_3, value);
	}

	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(DestroyByContactEnemyShot_t1776741971, ___player_4)); }
	inline GameObject_t4012695102 * get_player_4() const { return ___player_4; }
	inline GameObject_t4012695102 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_t4012695102 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier(&___player_4, value);
	}

	inline static int32_t get_offset_of_playerHealth_5() { return static_cast<int32_t>(offsetof(DestroyByContactEnemyShot_t1776741971, ___playerHealth_5)); }
	inline PlayerHealth_t3877793981 * get_playerHealth_5() const { return ___playerHealth_5; }
	inline PlayerHealth_t3877793981 ** get_address_of_playerHealth_5() { return &___playerHealth_5; }
	inline void set_playerHealth_5(PlayerHealth_t3877793981 * value)
	{
		___playerHealth_5 = value;
		Il2CppCodeGenWriteBarrier(&___playerHealth_5, value);
	}

	inline static int32_t get_offset_of_enemyHealth_6() { return static_cast<int32_t>(offsetof(DestroyByContactEnemyShot_t1776741971, ___enemyHealth_6)); }
	inline EnemyHealth_t1417584612 * get_enemyHealth_6() const { return ___enemyHealth_6; }
	inline EnemyHealth_t1417584612 ** get_address_of_enemyHealth_6() { return &___enemyHealth_6; }
	inline void set_enemyHealth_6(EnemyHealth_t1417584612 * value)
	{
		___enemyHealth_6 = value;
		Il2CppCodeGenWriteBarrier(&___enemyHealth_6, value);
	}

	inline static int32_t get_offset_of_playerInRange_7() { return static_cast<int32_t>(offsetof(DestroyByContactEnemyShot_t1776741971, ___playerInRange_7)); }
	inline bool get_playerInRange_7() const { return ___playerInRange_7; }
	inline bool* get_address_of_playerInRange_7() { return &___playerInRange_7; }
	inline void set_playerInRange_7(bool value)
	{
		___playerInRange_7 = value;
	}

	inline static int32_t get_offset_of_timer_8() { return static_cast<int32_t>(offsetof(DestroyByContactEnemyShot_t1776741971, ___timer_8)); }
	inline float get_timer_8() const { return ___timer_8; }
	inline float* get_address_of_timer_8() { return &___timer_8; }
	inline void set_timer_8(float value)
	{
		___timer_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
