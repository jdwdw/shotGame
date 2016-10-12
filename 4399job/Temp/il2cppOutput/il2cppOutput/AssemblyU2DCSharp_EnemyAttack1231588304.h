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

// EnemyAttack
struct  EnemyAttack_t1231588304  : public MonoBehaviour_t3012272455
{
public:
	// System.Single EnemyAttack::timeBetweenAttacks
	float ___timeBetweenAttacks_2;
	// System.Int32 EnemyAttack::attackDamage
	int32_t ___attackDamage_3;
	// UnityEngine.Animator EnemyAttack::anim
	Animator_t792326996 * ___anim_4;
	// UnityEngine.GameObject EnemyAttack::player
	GameObject_t4012695102 * ___player_5;
	// PlayerHealth EnemyAttack::playerHealth
	PlayerHealth_t3877793981 * ___playerHealth_6;
	// EnemyHealth EnemyAttack::enemyHealth
	EnemyHealth_t1417584612 * ___enemyHealth_7;
	// System.Boolean EnemyAttack::playerInRange
	bool ___playerInRange_8;
	// System.Single EnemyAttack::timer
	float ___timer_9;

public:
	inline static int32_t get_offset_of_timeBetweenAttacks_2() { return static_cast<int32_t>(offsetof(EnemyAttack_t1231588304, ___timeBetweenAttacks_2)); }
	inline float get_timeBetweenAttacks_2() const { return ___timeBetweenAttacks_2; }
	inline float* get_address_of_timeBetweenAttacks_2() { return &___timeBetweenAttacks_2; }
	inline void set_timeBetweenAttacks_2(float value)
	{
		___timeBetweenAttacks_2 = value;
	}

	inline static int32_t get_offset_of_attackDamage_3() { return static_cast<int32_t>(offsetof(EnemyAttack_t1231588304, ___attackDamage_3)); }
	inline int32_t get_attackDamage_3() const { return ___attackDamage_3; }
	inline int32_t* get_address_of_attackDamage_3() { return &___attackDamage_3; }
	inline void set_attackDamage_3(int32_t value)
	{
		___attackDamage_3 = value;
	}

	inline static int32_t get_offset_of_anim_4() { return static_cast<int32_t>(offsetof(EnemyAttack_t1231588304, ___anim_4)); }
	inline Animator_t792326996 * get_anim_4() const { return ___anim_4; }
	inline Animator_t792326996 ** get_address_of_anim_4() { return &___anim_4; }
	inline void set_anim_4(Animator_t792326996 * value)
	{
		___anim_4 = value;
		Il2CppCodeGenWriteBarrier(&___anim_4, value);
	}

	inline static int32_t get_offset_of_player_5() { return static_cast<int32_t>(offsetof(EnemyAttack_t1231588304, ___player_5)); }
	inline GameObject_t4012695102 * get_player_5() const { return ___player_5; }
	inline GameObject_t4012695102 ** get_address_of_player_5() { return &___player_5; }
	inline void set_player_5(GameObject_t4012695102 * value)
	{
		___player_5 = value;
		Il2CppCodeGenWriteBarrier(&___player_5, value);
	}

	inline static int32_t get_offset_of_playerHealth_6() { return static_cast<int32_t>(offsetof(EnemyAttack_t1231588304, ___playerHealth_6)); }
	inline PlayerHealth_t3877793981 * get_playerHealth_6() const { return ___playerHealth_6; }
	inline PlayerHealth_t3877793981 ** get_address_of_playerHealth_6() { return &___playerHealth_6; }
	inline void set_playerHealth_6(PlayerHealth_t3877793981 * value)
	{
		___playerHealth_6 = value;
		Il2CppCodeGenWriteBarrier(&___playerHealth_6, value);
	}

	inline static int32_t get_offset_of_enemyHealth_7() { return static_cast<int32_t>(offsetof(EnemyAttack_t1231588304, ___enemyHealth_7)); }
	inline EnemyHealth_t1417584612 * get_enemyHealth_7() const { return ___enemyHealth_7; }
	inline EnemyHealth_t1417584612 ** get_address_of_enemyHealth_7() { return &___enemyHealth_7; }
	inline void set_enemyHealth_7(EnemyHealth_t1417584612 * value)
	{
		___enemyHealth_7 = value;
		Il2CppCodeGenWriteBarrier(&___enemyHealth_7, value);
	}

	inline static int32_t get_offset_of_playerInRange_8() { return static_cast<int32_t>(offsetof(EnemyAttack_t1231588304, ___playerInRange_8)); }
	inline bool get_playerInRange_8() const { return ___playerInRange_8; }
	inline bool* get_address_of_playerInRange_8() { return &___playerInRange_8; }
	inline void set_playerInRange_8(bool value)
	{
		___playerInRange_8 = value;
	}

	inline static int32_t get_offset_of_timer_9() { return static_cast<int32_t>(offsetof(EnemyAttack_t1231588304, ___timer_9)); }
	inline float get_timer_9() const { return ___timer_9; }
	inline float* get_address_of_timer_9() { return &___timer_9; }
	inline void set_timer_9(float value)
	{
		___timer_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
