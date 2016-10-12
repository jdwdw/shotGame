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
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// PlayerShooting
struct PlayerShooting_t3585541508;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerShot
struct  PlayerShot_t4089277851  : public MonoBehaviour_t3012272455
{
public:
	// System.Single PlayerShot::fireRate
	float ___fireRate_2;
	// UnityEngine.GameObject PlayerShot::shot
	GameObject_t4012695102 * ___shot_3;
	// UnityEngine.Transform PlayerShot::shotSpawn
	Transform_t284553113 * ___shotSpawn_4;
	// System.Single PlayerShot::nextFire
	float ___nextFire_5;
	// UnityEngine.Animator PlayerShot::anim
	Animator_t792326996 * ___anim_6;
	// UnityEngine.GameObject PlayerShot::player
	GameObject_t4012695102 * ___player_7;
	// UnityEngine.GameObject PlayerShot::playerGun
	GameObject_t4012695102 * ___playerGun_8;
	// UnityEngine.AudioSource PlayerShot::gunAudio
	AudioSource_t3628549054 * ___gunAudio_9;
	// System.Boolean PlayerShot::shoted
	bool ___shoted_10;
	// PlayerShooting PlayerShot::playershooting
	PlayerShooting_t3585541508 * ___playershooting_11;

public:
	inline static int32_t get_offset_of_fireRate_2() { return static_cast<int32_t>(offsetof(PlayerShot_t4089277851, ___fireRate_2)); }
	inline float get_fireRate_2() const { return ___fireRate_2; }
	inline float* get_address_of_fireRate_2() { return &___fireRate_2; }
	inline void set_fireRate_2(float value)
	{
		___fireRate_2 = value;
	}

	inline static int32_t get_offset_of_shot_3() { return static_cast<int32_t>(offsetof(PlayerShot_t4089277851, ___shot_3)); }
	inline GameObject_t4012695102 * get_shot_3() const { return ___shot_3; }
	inline GameObject_t4012695102 ** get_address_of_shot_3() { return &___shot_3; }
	inline void set_shot_3(GameObject_t4012695102 * value)
	{
		___shot_3 = value;
		Il2CppCodeGenWriteBarrier(&___shot_3, value);
	}

	inline static int32_t get_offset_of_shotSpawn_4() { return static_cast<int32_t>(offsetof(PlayerShot_t4089277851, ___shotSpawn_4)); }
	inline Transform_t284553113 * get_shotSpawn_4() const { return ___shotSpawn_4; }
	inline Transform_t284553113 ** get_address_of_shotSpawn_4() { return &___shotSpawn_4; }
	inline void set_shotSpawn_4(Transform_t284553113 * value)
	{
		___shotSpawn_4 = value;
		Il2CppCodeGenWriteBarrier(&___shotSpawn_4, value);
	}

	inline static int32_t get_offset_of_nextFire_5() { return static_cast<int32_t>(offsetof(PlayerShot_t4089277851, ___nextFire_5)); }
	inline float get_nextFire_5() const { return ___nextFire_5; }
	inline float* get_address_of_nextFire_5() { return &___nextFire_5; }
	inline void set_nextFire_5(float value)
	{
		___nextFire_5 = value;
	}

	inline static int32_t get_offset_of_anim_6() { return static_cast<int32_t>(offsetof(PlayerShot_t4089277851, ___anim_6)); }
	inline Animator_t792326996 * get_anim_6() const { return ___anim_6; }
	inline Animator_t792326996 ** get_address_of_anim_6() { return &___anim_6; }
	inline void set_anim_6(Animator_t792326996 * value)
	{
		___anim_6 = value;
		Il2CppCodeGenWriteBarrier(&___anim_6, value);
	}

	inline static int32_t get_offset_of_player_7() { return static_cast<int32_t>(offsetof(PlayerShot_t4089277851, ___player_7)); }
	inline GameObject_t4012695102 * get_player_7() const { return ___player_7; }
	inline GameObject_t4012695102 ** get_address_of_player_7() { return &___player_7; }
	inline void set_player_7(GameObject_t4012695102 * value)
	{
		___player_7 = value;
		Il2CppCodeGenWriteBarrier(&___player_7, value);
	}

	inline static int32_t get_offset_of_playerGun_8() { return static_cast<int32_t>(offsetof(PlayerShot_t4089277851, ___playerGun_8)); }
	inline GameObject_t4012695102 * get_playerGun_8() const { return ___playerGun_8; }
	inline GameObject_t4012695102 ** get_address_of_playerGun_8() { return &___playerGun_8; }
	inline void set_playerGun_8(GameObject_t4012695102 * value)
	{
		___playerGun_8 = value;
		Il2CppCodeGenWriteBarrier(&___playerGun_8, value);
	}

	inline static int32_t get_offset_of_gunAudio_9() { return static_cast<int32_t>(offsetof(PlayerShot_t4089277851, ___gunAudio_9)); }
	inline AudioSource_t3628549054 * get_gunAudio_9() const { return ___gunAudio_9; }
	inline AudioSource_t3628549054 ** get_address_of_gunAudio_9() { return &___gunAudio_9; }
	inline void set_gunAudio_9(AudioSource_t3628549054 * value)
	{
		___gunAudio_9 = value;
		Il2CppCodeGenWriteBarrier(&___gunAudio_9, value);
	}

	inline static int32_t get_offset_of_shoted_10() { return static_cast<int32_t>(offsetof(PlayerShot_t4089277851, ___shoted_10)); }
	inline bool get_shoted_10() const { return ___shoted_10; }
	inline bool* get_address_of_shoted_10() { return &___shoted_10; }
	inline void set_shoted_10(bool value)
	{
		___shoted_10 = value;
	}

	inline static int32_t get_offset_of_playershooting_11() { return static_cast<int32_t>(offsetof(PlayerShot_t4089277851, ___playershooting_11)); }
	inline PlayerShooting_t3585541508 * get_playershooting_11() const { return ___playershooting_11; }
	inline PlayerShooting_t3585541508 ** get_address_of_playershooting_11() { return &___playershooting_11; }
	inline void set_playershooting_11(PlayerShooting_t3585541508 * value)
	{
		___playershooting_11 = value;
		Il2CppCodeGenWriteBarrier(&___playershooting_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
