#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.ParticleSystem
struct ParticleSystem_t56787138;
// UnityEngine.LineRenderer
struct LineRenderer_t305781060;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// UnityEngine.Light
struct Light_t1596303683;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Ray1522967639.h"
#include "UnityEngine_UnityEngine_RaycastHit46221527.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerShooting
struct  PlayerShooting_t3585541508  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 PlayerShooting::damagePerShot
	int32_t ___damagePerShot_2;
	// System.Single PlayerShooting::timeBetweenBullets
	float ___timeBetweenBullets_3;
	// System.Single PlayerShooting::range
	float ___range_4;
	// System.Single PlayerShooting::timer
	float ___timer_5;
	// UnityEngine.Ray PlayerShooting::shootRay
	Ray_t1522967639  ___shootRay_6;
	// UnityEngine.RaycastHit PlayerShooting::shootHit
	RaycastHit_t46221527  ___shootHit_7;
	// System.Int32 PlayerShooting::shootableMask
	int32_t ___shootableMask_8;
	// UnityEngine.ParticleSystem PlayerShooting::gunParticles
	ParticleSystem_t56787138 * ___gunParticles_9;
	// UnityEngine.LineRenderer PlayerShooting::gunLine
	LineRenderer_t305781060 * ___gunLine_10;
	// UnityEngine.AudioSource PlayerShooting::gunAudio
	AudioSource_t3628549054 * ___gunAudio_11;
	// UnityEngine.Light PlayerShooting::gunLight
	Light_t1596303683 * ___gunLight_12;
	// System.Single PlayerShooting::effectsDisplayTime
	float ___effectsDisplayTime_13;

public:
	inline static int32_t get_offset_of_damagePerShot_2() { return static_cast<int32_t>(offsetof(PlayerShooting_t3585541508, ___damagePerShot_2)); }
	inline int32_t get_damagePerShot_2() const { return ___damagePerShot_2; }
	inline int32_t* get_address_of_damagePerShot_2() { return &___damagePerShot_2; }
	inline void set_damagePerShot_2(int32_t value)
	{
		___damagePerShot_2 = value;
	}

	inline static int32_t get_offset_of_timeBetweenBullets_3() { return static_cast<int32_t>(offsetof(PlayerShooting_t3585541508, ___timeBetweenBullets_3)); }
	inline float get_timeBetweenBullets_3() const { return ___timeBetweenBullets_3; }
	inline float* get_address_of_timeBetweenBullets_3() { return &___timeBetweenBullets_3; }
	inline void set_timeBetweenBullets_3(float value)
	{
		___timeBetweenBullets_3 = value;
	}

	inline static int32_t get_offset_of_range_4() { return static_cast<int32_t>(offsetof(PlayerShooting_t3585541508, ___range_4)); }
	inline float get_range_4() const { return ___range_4; }
	inline float* get_address_of_range_4() { return &___range_4; }
	inline void set_range_4(float value)
	{
		___range_4 = value;
	}

	inline static int32_t get_offset_of_timer_5() { return static_cast<int32_t>(offsetof(PlayerShooting_t3585541508, ___timer_5)); }
	inline float get_timer_5() const { return ___timer_5; }
	inline float* get_address_of_timer_5() { return &___timer_5; }
	inline void set_timer_5(float value)
	{
		___timer_5 = value;
	}

	inline static int32_t get_offset_of_shootRay_6() { return static_cast<int32_t>(offsetof(PlayerShooting_t3585541508, ___shootRay_6)); }
	inline Ray_t1522967639  get_shootRay_6() const { return ___shootRay_6; }
	inline Ray_t1522967639 * get_address_of_shootRay_6() { return &___shootRay_6; }
	inline void set_shootRay_6(Ray_t1522967639  value)
	{
		___shootRay_6 = value;
	}

	inline static int32_t get_offset_of_shootHit_7() { return static_cast<int32_t>(offsetof(PlayerShooting_t3585541508, ___shootHit_7)); }
	inline RaycastHit_t46221527  get_shootHit_7() const { return ___shootHit_7; }
	inline RaycastHit_t46221527 * get_address_of_shootHit_7() { return &___shootHit_7; }
	inline void set_shootHit_7(RaycastHit_t46221527  value)
	{
		___shootHit_7 = value;
	}

	inline static int32_t get_offset_of_shootableMask_8() { return static_cast<int32_t>(offsetof(PlayerShooting_t3585541508, ___shootableMask_8)); }
	inline int32_t get_shootableMask_8() const { return ___shootableMask_8; }
	inline int32_t* get_address_of_shootableMask_8() { return &___shootableMask_8; }
	inline void set_shootableMask_8(int32_t value)
	{
		___shootableMask_8 = value;
	}

	inline static int32_t get_offset_of_gunParticles_9() { return static_cast<int32_t>(offsetof(PlayerShooting_t3585541508, ___gunParticles_9)); }
	inline ParticleSystem_t56787138 * get_gunParticles_9() const { return ___gunParticles_9; }
	inline ParticleSystem_t56787138 ** get_address_of_gunParticles_9() { return &___gunParticles_9; }
	inline void set_gunParticles_9(ParticleSystem_t56787138 * value)
	{
		___gunParticles_9 = value;
		Il2CppCodeGenWriteBarrier(&___gunParticles_9, value);
	}

	inline static int32_t get_offset_of_gunLine_10() { return static_cast<int32_t>(offsetof(PlayerShooting_t3585541508, ___gunLine_10)); }
	inline LineRenderer_t305781060 * get_gunLine_10() const { return ___gunLine_10; }
	inline LineRenderer_t305781060 ** get_address_of_gunLine_10() { return &___gunLine_10; }
	inline void set_gunLine_10(LineRenderer_t305781060 * value)
	{
		___gunLine_10 = value;
		Il2CppCodeGenWriteBarrier(&___gunLine_10, value);
	}

	inline static int32_t get_offset_of_gunAudio_11() { return static_cast<int32_t>(offsetof(PlayerShooting_t3585541508, ___gunAudio_11)); }
	inline AudioSource_t3628549054 * get_gunAudio_11() const { return ___gunAudio_11; }
	inline AudioSource_t3628549054 ** get_address_of_gunAudio_11() { return &___gunAudio_11; }
	inline void set_gunAudio_11(AudioSource_t3628549054 * value)
	{
		___gunAudio_11 = value;
		Il2CppCodeGenWriteBarrier(&___gunAudio_11, value);
	}

	inline static int32_t get_offset_of_gunLight_12() { return static_cast<int32_t>(offsetof(PlayerShooting_t3585541508, ___gunLight_12)); }
	inline Light_t1596303683 * get_gunLight_12() const { return ___gunLight_12; }
	inline Light_t1596303683 ** get_address_of_gunLight_12() { return &___gunLight_12; }
	inline void set_gunLight_12(Light_t1596303683 * value)
	{
		___gunLight_12 = value;
		Il2CppCodeGenWriteBarrier(&___gunLight_12, value);
	}

	inline static int32_t get_offset_of_effectsDisplayTime_13() { return static_cast<int32_t>(offsetof(PlayerShooting_t3585541508, ___effectsDisplayTime_13)); }
	inline float get_effectsDisplayTime_13() const { return ___effectsDisplayTime_13; }
	inline float* get_address_of_effectsDisplayTime_13() { return &___effectsDisplayTime_13; }
	inline void set_effectsDisplayTime_13(float value)
	{
		___effectsDisplayTime_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
