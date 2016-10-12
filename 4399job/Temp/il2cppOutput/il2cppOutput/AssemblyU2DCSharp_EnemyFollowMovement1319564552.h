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
// PlayerHealth
struct PlayerHealth_t3877793981;
// EnemyHealth
struct EnemyHealth_t1417584612;
// UnityEngine.NavMeshAgent
struct NavMeshAgent_t3296505762;
// UnityEngine.Animator
struct Animator_t792326996;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyFollowMovement
struct  EnemyFollowMovement_t1319564552  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Transform EnemyFollowMovement::player
	Transform_t284553113 * ___player_2;
	// PlayerHealth EnemyFollowMovement::playerHealth
	PlayerHealth_t3877793981 * ___playerHealth_3;
	// EnemyHealth EnemyFollowMovement::enemyHealth
	EnemyHealth_t1417584612 * ___enemyHealth_4;
	// UnityEngine.NavMeshAgent EnemyFollowMovement::nav
	NavMeshAgent_t3296505762 * ___nav_5;
	// UnityEngine.Animator EnemyFollowMovement::anim
	Animator_t792326996 * ___anim_6;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(EnemyFollowMovement_t1319564552, ___player_2)); }
	inline Transform_t284553113 * get_player_2() const { return ___player_2; }
	inline Transform_t284553113 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(Transform_t284553113 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_playerHealth_3() { return static_cast<int32_t>(offsetof(EnemyFollowMovement_t1319564552, ___playerHealth_3)); }
	inline PlayerHealth_t3877793981 * get_playerHealth_3() const { return ___playerHealth_3; }
	inline PlayerHealth_t3877793981 ** get_address_of_playerHealth_3() { return &___playerHealth_3; }
	inline void set_playerHealth_3(PlayerHealth_t3877793981 * value)
	{
		___playerHealth_3 = value;
		Il2CppCodeGenWriteBarrier(&___playerHealth_3, value);
	}

	inline static int32_t get_offset_of_enemyHealth_4() { return static_cast<int32_t>(offsetof(EnemyFollowMovement_t1319564552, ___enemyHealth_4)); }
	inline EnemyHealth_t1417584612 * get_enemyHealth_4() const { return ___enemyHealth_4; }
	inline EnemyHealth_t1417584612 ** get_address_of_enemyHealth_4() { return &___enemyHealth_4; }
	inline void set_enemyHealth_4(EnemyHealth_t1417584612 * value)
	{
		___enemyHealth_4 = value;
		Il2CppCodeGenWriteBarrier(&___enemyHealth_4, value);
	}

	inline static int32_t get_offset_of_nav_5() { return static_cast<int32_t>(offsetof(EnemyFollowMovement_t1319564552, ___nav_5)); }
	inline NavMeshAgent_t3296505762 * get_nav_5() const { return ___nav_5; }
	inline NavMeshAgent_t3296505762 ** get_address_of_nav_5() { return &___nav_5; }
	inline void set_nav_5(NavMeshAgent_t3296505762 * value)
	{
		___nav_5 = value;
		Il2CppCodeGenWriteBarrier(&___nav_5, value);
	}

	inline static int32_t get_offset_of_anim_6() { return static_cast<int32_t>(offsetof(EnemyFollowMovement_t1319564552, ___anim_6)); }
	inline Animator_t792326996 * get_anim_6() const { return ___anim_6; }
	inline Animator_t792326996 ** get_address_of_anim_6() { return &___anim_6; }
	inline void set_anim_6(Animator_t792326996 * value)
	{
		___anim_6 = value;
		Il2CppCodeGenWriteBarrier(&___anim_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
