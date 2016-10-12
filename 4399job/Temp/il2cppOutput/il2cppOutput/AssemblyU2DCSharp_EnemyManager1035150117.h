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
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3681339876;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyManager
struct  EnemyManager_t1035150117  : public MonoBehaviour_t3012272455
{
public:
	// PlayerHealth EnemyManager::playerHealth
	PlayerHealth_t3877793981 * ___playerHealth_2;
	// UnityEngine.GameObject EnemyManager::enemy
	GameObject_t4012695102 * ___enemy_3;
	// System.Single EnemyManager::spawnTime
	float ___spawnTime_4;
	// UnityEngine.Transform[] EnemyManager::spawnPoints
	TransformU5BU5D_t3681339876* ___spawnPoints_5;

public:
	inline static int32_t get_offset_of_playerHealth_2() { return static_cast<int32_t>(offsetof(EnemyManager_t1035150117, ___playerHealth_2)); }
	inline PlayerHealth_t3877793981 * get_playerHealth_2() const { return ___playerHealth_2; }
	inline PlayerHealth_t3877793981 ** get_address_of_playerHealth_2() { return &___playerHealth_2; }
	inline void set_playerHealth_2(PlayerHealth_t3877793981 * value)
	{
		___playerHealth_2 = value;
		Il2CppCodeGenWriteBarrier(&___playerHealth_2, value);
	}

	inline static int32_t get_offset_of_enemy_3() { return static_cast<int32_t>(offsetof(EnemyManager_t1035150117, ___enemy_3)); }
	inline GameObject_t4012695102 * get_enemy_3() const { return ___enemy_3; }
	inline GameObject_t4012695102 ** get_address_of_enemy_3() { return &___enemy_3; }
	inline void set_enemy_3(GameObject_t4012695102 * value)
	{
		___enemy_3 = value;
		Il2CppCodeGenWriteBarrier(&___enemy_3, value);
	}

	inline static int32_t get_offset_of_spawnTime_4() { return static_cast<int32_t>(offsetof(EnemyManager_t1035150117, ___spawnTime_4)); }
	inline float get_spawnTime_4() const { return ___spawnTime_4; }
	inline float* get_address_of_spawnTime_4() { return &___spawnTime_4; }
	inline void set_spawnTime_4(float value)
	{
		___spawnTime_4 = value;
	}

	inline static int32_t get_offset_of_spawnPoints_5() { return static_cast<int32_t>(offsetof(EnemyManager_t1035150117, ___spawnPoints_5)); }
	inline TransformU5BU5D_t3681339876* get_spawnPoints_5() const { return ___spawnPoints_5; }
	inline TransformU5BU5D_t3681339876** get_address_of_spawnPoints_5() { return &___spawnPoints_5; }
	inline void set_spawnPoints_5(TransformU5BU5D_t3681339876* value)
	{
		___spawnPoints_5 = value;
		Il2CppCodeGenWriteBarrier(&___spawnPoints_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
