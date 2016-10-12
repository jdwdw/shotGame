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
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.Animator
struct Animator_t792326996;
// PlayerHealth
struct PlayerHealth_t3877793981;
// EnemyHealth
struct EnemyHealth_t1417584612;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyShooting
struct  EnemyShooting_t1556350699  : public MonoBehaviour_t3012272455
{
public:
	// System.Single EnemyShooting::timeBetweenAttacks
	float ___timeBetweenAttacks_2;
	// System.Int32 EnemyShooting::attackDamage
	int32_t ___attackDamage_3;
	// System.Single EnemyShooting::fireRate
	float ___fireRate_4;
	// UnityEngine.GameObject EnemyShooting::shot
	GameObject_t4012695102 * ___shot_5;
	// UnityEngine.Transform EnemyShooting::shotSpawn
	Transform_t284553113 * ___shotSpawn_6;
	// System.Single EnemyShooting::nextFire
	float ___nextFire_7;
	// UnityEngine.Animator EnemyShooting::anim
	Animator_t792326996 * ___anim_8;
	// UnityEngine.GameObject EnemyShooting::player
	GameObject_t4012695102 * ___player_9;
	// PlayerHealth EnemyShooting::playerHealth
	PlayerHealth_t3877793981 * ___playerHealth_10;
	// EnemyHealth EnemyShooting::enemyHealth
	EnemyHealth_t1417584612 * ___enemyHealth_11;
	// System.Boolean EnemyShooting::playerInRange
	bool ___playerInRange_12;
	// System.Single EnemyShooting::timer
	float ___timer_13;
	// System.Single EnemyShooting::camRayLength
	float ___camRayLength_14;
	// System.Int32 EnemyShooting::floorMask
	int32_t ___floorMask_15;
	// UnityEngine.Rigidbody EnemyShooting::rb
	Rigidbody_t1972007546 * ___rb_16;

public:
	inline static int32_t get_offset_of_timeBetweenAttacks_2() { return static_cast<int32_t>(offsetof(EnemyShooting_t1556350699, ___timeBetweenAttacks_2)); }
	inline float get_timeBetweenAttacks_2() const { return ___timeBetweenAttacks_2; }
	inline float* get_address_of_timeBetweenAttacks_2() { return &___timeBetweenAttacks_2; }
	inline void set_timeBetweenAttacks_2(float value)
	{
		___timeBetweenAttacks_2 = value;
	}

	inline static int32_t get_offset_of_attackDamage_3() { return static_cast<int32_t>(offsetof(EnemyShooting_t1556350699, ___attackDamage_3)); }
	inline int32_t get_attackDamage_3() const { return ___attackDamage_3; }
	inline int32_t* get_address_of_attackDamage_3() { return &___attackDamage_3; }
	inline void set_attackDamage_3(int32_t value)
	{
		___attackDamage_3 = value;
	}

	inline static int32_t get_offset_of_fireRate_4() { return static_cast<int32_t>(offsetof(EnemyShooting_t1556350699, ___fireRate_4)); }
	inline float get_fireRate_4() const { return ___fireRate_4; }
	inline float* get_address_of_fireRate_4() { return &___fireRate_4; }
	inline void set_fireRate_4(float value)
	{
		___fireRate_4 = value;
	}

	inline static int32_t get_offset_of_shot_5() { return static_cast<int32_t>(offsetof(EnemyShooting_t1556350699, ___shot_5)); }
	inline GameObject_t4012695102 * get_shot_5() const { return ___shot_5; }
	inline GameObject_t4012695102 ** get_address_of_shot_5() { return &___shot_5; }
	inline void set_shot_5(GameObject_t4012695102 * value)
	{
		___shot_5 = value;
		Il2CppCodeGenWriteBarrier(&___shot_5, value);
	}

	inline static int32_t get_offset_of_shotSpawn_6() { return static_cast<int32_t>(offsetof(EnemyShooting_t1556350699, ___shotSpawn_6)); }
	inline Transform_t284553113 * get_shotSpawn_6() const { return ___shotSpawn_6; }
	inline Transform_t284553113 ** get_address_of_shotSpawn_6() { return &___shotSpawn_6; }
	inline void set_shotSpawn_6(Transform_t284553113 * value)
	{
		___shotSpawn_6 = value;
		Il2CppCodeGenWriteBarrier(&___shotSpawn_6, value);
	}

	inline static int32_t get_offset_of_nextFire_7() { return static_cast<int32_t>(offsetof(EnemyShooting_t1556350699, ___nextFire_7)); }
	inline float get_nextFire_7() const { return ___nextFire_7; }
	inline float* get_address_of_nextFire_7() { return &___nextFire_7; }
	inline void set_nextFire_7(float value)
	{
		___nextFire_7 = value;
	}

	inline static int32_t get_offset_of_anim_8() { return static_cast<int32_t>(offsetof(EnemyShooting_t1556350699, ___anim_8)); }
	inline Animator_t792326996 * get_anim_8() const { return ___anim_8; }
	inline Animator_t792326996 ** get_address_of_anim_8() { return &___anim_8; }
	inline void set_anim_8(Animator_t792326996 * value)
	{
		___anim_8 = value;
		Il2CppCodeGenWriteBarrier(&___anim_8, value);
	}

	inline static int32_t get_offset_of_player_9() { return static_cast<int32_t>(offsetof(EnemyShooting_t1556350699, ___player_9)); }
	inline GameObject_t4012695102 * get_player_9() const { return ___player_9; }
	inline GameObject_t4012695102 ** get_address_of_player_9() { return &___player_9; }
	inline void set_player_9(GameObject_t4012695102 * value)
	{
		___player_9 = value;
		Il2CppCodeGenWriteBarrier(&___player_9, value);
	}

	inline static int32_t get_offset_of_playerHealth_10() { return static_cast<int32_t>(offsetof(EnemyShooting_t1556350699, ___playerHealth_10)); }
	inline PlayerHealth_t3877793981 * get_playerHealth_10() const { return ___playerHealth_10; }
	inline PlayerHealth_t3877793981 ** get_address_of_playerHealth_10() { return &___playerHealth_10; }
	inline void set_playerHealth_10(PlayerHealth_t3877793981 * value)
	{
		___playerHealth_10 = value;
		Il2CppCodeGenWriteBarrier(&___playerHealth_10, value);
	}

	inline static int32_t get_offset_of_enemyHealth_11() { return static_cast<int32_t>(offsetof(EnemyShooting_t1556350699, ___enemyHealth_11)); }
	inline EnemyHealth_t1417584612 * get_enemyHealth_11() const { return ___enemyHealth_11; }
	inline EnemyHealth_t1417584612 ** get_address_of_enemyHealth_11() { return &___enemyHealth_11; }
	inline void set_enemyHealth_11(EnemyHealth_t1417584612 * value)
	{
		___enemyHealth_11 = value;
		Il2CppCodeGenWriteBarrier(&___enemyHealth_11, value);
	}

	inline static int32_t get_offset_of_playerInRange_12() { return static_cast<int32_t>(offsetof(EnemyShooting_t1556350699, ___playerInRange_12)); }
	inline bool get_playerInRange_12() const { return ___playerInRange_12; }
	inline bool* get_address_of_playerInRange_12() { return &___playerInRange_12; }
	inline void set_playerInRange_12(bool value)
	{
		___playerInRange_12 = value;
	}

	inline static int32_t get_offset_of_timer_13() { return static_cast<int32_t>(offsetof(EnemyShooting_t1556350699, ___timer_13)); }
	inline float get_timer_13() const { return ___timer_13; }
	inline float* get_address_of_timer_13() { return &___timer_13; }
	inline void set_timer_13(float value)
	{
		___timer_13 = value;
	}

	inline static int32_t get_offset_of_camRayLength_14() { return static_cast<int32_t>(offsetof(EnemyShooting_t1556350699, ___camRayLength_14)); }
	inline float get_camRayLength_14() const { return ___camRayLength_14; }
	inline float* get_address_of_camRayLength_14() { return &___camRayLength_14; }
	inline void set_camRayLength_14(float value)
	{
		___camRayLength_14 = value;
	}

	inline static int32_t get_offset_of_floorMask_15() { return static_cast<int32_t>(offsetof(EnemyShooting_t1556350699, ___floorMask_15)); }
	inline int32_t get_floorMask_15() const { return ___floorMask_15; }
	inline int32_t* get_address_of_floorMask_15() { return &___floorMask_15; }
	inline void set_floorMask_15(int32_t value)
	{
		___floorMask_15 = value;
	}

	inline static int32_t get_offset_of_rb_16() { return static_cast<int32_t>(offsetof(EnemyShooting_t1556350699, ___rb_16)); }
	inline Rigidbody_t1972007546 * get_rb_16() const { return ___rb_16; }
	inline Rigidbody_t1972007546 ** get_address_of_rb_16() { return &___rb_16; }
	inline void set_rb_16(Rigidbody_t1972007546 * value)
	{
		___rb_16 = value;
		Il2CppCodeGenWriteBarrier(&___rb_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
