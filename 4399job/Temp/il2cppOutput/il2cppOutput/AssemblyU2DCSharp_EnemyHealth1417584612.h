#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// UnityEngine.Animator
struct Animator_t792326996;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// UnityEngine.ParticleSystem
struct ParticleSystem_t56787138;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3138252142;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyHealth
struct  EnemyHealth_t1417584612  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 EnemyHealth::startingHealth
	int32_t ___startingHealth_2;
	// System.Int32 EnemyHealth::currentHealth
	int32_t ___currentHealth_3;
	// System.Single EnemyHealth::sinkSpeed
	float ___sinkSpeed_4;
	// System.Int32 EnemyHealth::scoreValue
	int32_t ___scoreValue_5;
	// UnityEngine.AudioClip EnemyHealth::deathClip
	AudioClip_t3714538611 * ___deathClip_6;
	// UnityEngine.Animator EnemyHealth::anim
	Animator_t792326996 * ___anim_7;
	// UnityEngine.AudioSource EnemyHealth::enemyAudio
	AudioSource_t3628549054 * ___enemyAudio_8;
	// UnityEngine.ParticleSystem EnemyHealth::hitParticles
	ParticleSystem_t56787138 * ___hitParticles_9;
	// UnityEngine.CapsuleCollider EnemyHealth::capsuleCollider
	CapsuleCollider_t3138252142 * ___capsuleCollider_10;
	// System.Boolean EnemyHealth::isDead
	bool ___isDead_11;
	// System.Boolean EnemyHealth::isSinking
	bool ___isSinking_12;

public:
	inline static int32_t get_offset_of_startingHealth_2() { return static_cast<int32_t>(offsetof(EnemyHealth_t1417584612, ___startingHealth_2)); }
	inline int32_t get_startingHealth_2() const { return ___startingHealth_2; }
	inline int32_t* get_address_of_startingHealth_2() { return &___startingHealth_2; }
	inline void set_startingHealth_2(int32_t value)
	{
		___startingHealth_2 = value;
	}

	inline static int32_t get_offset_of_currentHealth_3() { return static_cast<int32_t>(offsetof(EnemyHealth_t1417584612, ___currentHealth_3)); }
	inline int32_t get_currentHealth_3() const { return ___currentHealth_3; }
	inline int32_t* get_address_of_currentHealth_3() { return &___currentHealth_3; }
	inline void set_currentHealth_3(int32_t value)
	{
		___currentHealth_3 = value;
	}

	inline static int32_t get_offset_of_sinkSpeed_4() { return static_cast<int32_t>(offsetof(EnemyHealth_t1417584612, ___sinkSpeed_4)); }
	inline float get_sinkSpeed_4() const { return ___sinkSpeed_4; }
	inline float* get_address_of_sinkSpeed_4() { return &___sinkSpeed_4; }
	inline void set_sinkSpeed_4(float value)
	{
		___sinkSpeed_4 = value;
	}

	inline static int32_t get_offset_of_scoreValue_5() { return static_cast<int32_t>(offsetof(EnemyHealth_t1417584612, ___scoreValue_5)); }
	inline int32_t get_scoreValue_5() const { return ___scoreValue_5; }
	inline int32_t* get_address_of_scoreValue_5() { return &___scoreValue_5; }
	inline void set_scoreValue_5(int32_t value)
	{
		___scoreValue_5 = value;
	}

	inline static int32_t get_offset_of_deathClip_6() { return static_cast<int32_t>(offsetof(EnemyHealth_t1417584612, ___deathClip_6)); }
	inline AudioClip_t3714538611 * get_deathClip_6() const { return ___deathClip_6; }
	inline AudioClip_t3714538611 ** get_address_of_deathClip_6() { return &___deathClip_6; }
	inline void set_deathClip_6(AudioClip_t3714538611 * value)
	{
		___deathClip_6 = value;
		Il2CppCodeGenWriteBarrier(&___deathClip_6, value);
	}

	inline static int32_t get_offset_of_anim_7() { return static_cast<int32_t>(offsetof(EnemyHealth_t1417584612, ___anim_7)); }
	inline Animator_t792326996 * get_anim_7() const { return ___anim_7; }
	inline Animator_t792326996 ** get_address_of_anim_7() { return &___anim_7; }
	inline void set_anim_7(Animator_t792326996 * value)
	{
		___anim_7 = value;
		Il2CppCodeGenWriteBarrier(&___anim_7, value);
	}

	inline static int32_t get_offset_of_enemyAudio_8() { return static_cast<int32_t>(offsetof(EnemyHealth_t1417584612, ___enemyAudio_8)); }
	inline AudioSource_t3628549054 * get_enemyAudio_8() const { return ___enemyAudio_8; }
	inline AudioSource_t3628549054 ** get_address_of_enemyAudio_8() { return &___enemyAudio_8; }
	inline void set_enemyAudio_8(AudioSource_t3628549054 * value)
	{
		___enemyAudio_8 = value;
		Il2CppCodeGenWriteBarrier(&___enemyAudio_8, value);
	}

	inline static int32_t get_offset_of_hitParticles_9() { return static_cast<int32_t>(offsetof(EnemyHealth_t1417584612, ___hitParticles_9)); }
	inline ParticleSystem_t56787138 * get_hitParticles_9() const { return ___hitParticles_9; }
	inline ParticleSystem_t56787138 ** get_address_of_hitParticles_9() { return &___hitParticles_9; }
	inline void set_hitParticles_9(ParticleSystem_t56787138 * value)
	{
		___hitParticles_9 = value;
		Il2CppCodeGenWriteBarrier(&___hitParticles_9, value);
	}

	inline static int32_t get_offset_of_capsuleCollider_10() { return static_cast<int32_t>(offsetof(EnemyHealth_t1417584612, ___capsuleCollider_10)); }
	inline CapsuleCollider_t3138252142 * get_capsuleCollider_10() const { return ___capsuleCollider_10; }
	inline CapsuleCollider_t3138252142 ** get_address_of_capsuleCollider_10() { return &___capsuleCollider_10; }
	inline void set_capsuleCollider_10(CapsuleCollider_t3138252142 * value)
	{
		___capsuleCollider_10 = value;
		Il2CppCodeGenWriteBarrier(&___capsuleCollider_10, value);
	}

	inline static int32_t get_offset_of_isDead_11() { return static_cast<int32_t>(offsetof(EnemyHealth_t1417584612, ___isDead_11)); }
	inline bool get_isDead_11() const { return ___isDead_11; }
	inline bool* get_address_of_isDead_11() { return &___isDead_11; }
	inline void set_isDead_11(bool value)
	{
		___isDead_11 = value;
	}

	inline static int32_t get_offset_of_isSinking_12() { return static_cast<int32_t>(offsetof(EnemyHealth_t1417584612, ___isSinking_12)); }
	inline bool get_isSinking_12() const { return ___isSinking_12; }
	inline bool* get_address_of_isSinking_12() { return &___isSinking_12; }
	inline void set_isSinking_12(bool value)
	{
		___isSinking_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
