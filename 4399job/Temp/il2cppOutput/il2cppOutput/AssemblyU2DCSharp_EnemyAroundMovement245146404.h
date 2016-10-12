#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform[]
struct TransformU5BU5D_t3681339876;
// UnityEngine.Transform
struct Transform_t284553113;
// PlayerHealth
struct PlayerHealth_t3877793981;
// EnemyHealth
struct EnemyHealth_t1417584612;
// UnityEngine.NavMeshAgent
struct NavMeshAgent_t3296505762;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;
// UnityEngine.Animator
struct Animator_t792326996;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyAroundMovement
struct  EnemyAroundMovement_t245146404  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Transform[] EnemyAroundMovement::WayPoints
	TransformU5BU5D_t3681339876* ___WayPoints_2;
	// UnityEngine.Transform EnemyAroundMovement::player
	Transform_t284553113 * ___player_3;
	// PlayerHealth EnemyAroundMovement::playerHealth
	PlayerHealth_t3877793981 * ___playerHealth_4;
	// EnemyHealth EnemyAroundMovement::enemyHealth
	EnemyHealth_t1417584612 * ___enemyHealth_5;
	// UnityEngine.NavMeshAgent EnemyAroundMovement::nav
	NavMeshAgent_t3296505762 * ___nav_6;
	// System.Int32 EnemyAroundMovement::m_WayPointIndex
	int32_t ___m_WayPointIndex_7;
	// System.Int32 EnemyAroundMovement::floorMask
	int32_t ___floorMask_8;
	// System.Single EnemyAroundMovement::camRayLength
	float ___camRayLength_9;
	// UnityEngine.Rigidbody EnemyAroundMovement::rb
	Rigidbody_t1972007546 * ___rb_10;
	// System.Boolean EnemyAroundMovement::playerInRange
	bool ___playerInRange_11;
	// UnityEngine.Animator EnemyAroundMovement::anim
	Animator_t792326996 * ___anim_12;

public:
	inline static int32_t get_offset_of_WayPoints_2() { return static_cast<int32_t>(offsetof(EnemyAroundMovement_t245146404, ___WayPoints_2)); }
	inline TransformU5BU5D_t3681339876* get_WayPoints_2() const { return ___WayPoints_2; }
	inline TransformU5BU5D_t3681339876** get_address_of_WayPoints_2() { return &___WayPoints_2; }
	inline void set_WayPoints_2(TransformU5BU5D_t3681339876* value)
	{
		___WayPoints_2 = value;
		Il2CppCodeGenWriteBarrier(&___WayPoints_2, value);
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(EnemyAroundMovement_t245146404, ___player_3)); }
	inline Transform_t284553113 * get_player_3() const { return ___player_3; }
	inline Transform_t284553113 ** get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(Transform_t284553113 * value)
	{
		___player_3 = value;
		Il2CppCodeGenWriteBarrier(&___player_3, value);
	}

	inline static int32_t get_offset_of_playerHealth_4() { return static_cast<int32_t>(offsetof(EnemyAroundMovement_t245146404, ___playerHealth_4)); }
	inline PlayerHealth_t3877793981 * get_playerHealth_4() const { return ___playerHealth_4; }
	inline PlayerHealth_t3877793981 ** get_address_of_playerHealth_4() { return &___playerHealth_4; }
	inline void set_playerHealth_4(PlayerHealth_t3877793981 * value)
	{
		___playerHealth_4 = value;
		Il2CppCodeGenWriteBarrier(&___playerHealth_4, value);
	}

	inline static int32_t get_offset_of_enemyHealth_5() { return static_cast<int32_t>(offsetof(EnemyAroundMovement_t245146404, ___enemyHealth_5)); }
	inline EnemyHealth_t1417584612 * get_enemyHealth_5() const { return ___enemyHealth_5; }
	inline EnemyHealth_t1417584612 ** get_address_of_enemyHealth_5() { return &___enemyHealth_5; }
	inline void set_enemyHealth_5(EnemyHealth_t1417584612 * value)
	{
		___enemyHealth_5 = value;
		Il2CppCodeGenWriteBarrier(&___enemyHealth_5, value);
	}

	inline static int32_t get_offset_of_nav_6() { return static_cast<int32_t>(offsetof(EnemyAroundMovement_t245146404, ___nav_6)); }
	inline NavMeshAgent_t3296505762 * get_nav_6() const { return ___nav_6; }
	inline NavMeshAgent_t3296505762 ** get_address_of_nav_6() { return &___nav_6; }
	inline void set_nav_6(NavMeshAgent_t3296505762 * value)
	{
		___nav_6 = value;
		Il2CppCodeGenWriteBarrier(&___nav_6, value);
	}

	inline static int32_t get_offset_of_m_WayPointIndex_7() { return static_cast<int32_t>(offsetof(EnemyAroundMovement_t245146404, ___m_WayPointIndex_7)); }
	inline int32_t get_m_WayPointIndex_7() const { return ___m_WayPointIndex_7; }
	inline int32_t* get_address_of_m_WayPointIndex_7() { return &___m_WayPointIndex_7; }
	inline void set_m_WayPointIndex_7(int32_t value)
	{
		___m_WayPointIndex_7 = value;
	}

	inline static int32_t get_offset_of_floorMask_8() { return static_cast<int32_t>(offsetof(EnemyAroundMovement_t245146404, ___floorMask_8)); }
	inline int32_t get_floorMask_8() const { return ___floorMask_8; }
	inline int32_t* get_address_of_floorMask_8() { return &___floorMask_8; }
	inline void set_floorMask_8(int32_t value)
	{
		___floorMask_8 = value;
	}

	inline static int32_t get_offset_of_camRayLength_9() { return static_cast<int32_t>(offsetof(EnemyAroundMovement_t245146404, ___camRayLength_9)); }
	inline float get_camRayLength_9() const { return ___camRayLength_9; }
	inline float* get_address_of_camRayLength_9() { return &___camRayLength_9; }
	inline void set_camRayLength_9(float value)
	{
		___camRayLength_9 = value;
	}

	inline static int32_t get_offset_of_rb_10() { return static_cast<int32_t>(offsetof(EnemyAroundMovement_t245146404, ___rb_10)); }
	inline Rigidbody_t1972007546 * get_rb_10() const { return ___rb_10; }
	inline Rigidbody_t1972007546 ** get_address_of_rb_10() { return &___rb_10; }
	inline void set_rb_10(Rigidbody_t1972007546 * value)
	{
		___rb_10 = value;
		Il2CppCodeGenWriteBarrier(&___rb_10, value);
	}

	inline static int32_t get_offset_of_playerInRange_11() { return static_cast<int32_t>(offsetof(EnemyAroundMovement_t245146404, ___playerInRange_11)); }
	inline bool get_playerInRange_11() const { return ___playerInRange_11; }
	inline bool* get_address_of_playerInRange_11() { return &___playerInRange_11; }
	inline void set_playerInRange_11(bool value)
	{
		___playerInRange_11 = value;
	}

	inline static int32_t get_offset_of_anim_12() { return static_cast<int32_t>(offsetof(EnemyAroundMovement_t245146404, ___anim_12)); }
	inline Animator_t792326996 * get_anim_12() const { return ___anim_12; }
	inline Animator_t792326996 ** get_address_of_anim_12() { return &___anim_12; }
	inline void set_anim_12(Animator_t792326996 * value)
	{
		___anim_12 = value;
		Il2CppCodeGenWriteBarrier(&___anim_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
