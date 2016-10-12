#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Slider
struct Slider_t1468074762;
// UnityEngine.UI.Image
struct Image_t3354615620;
// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Animator
struct Animator_t792326996;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// UnityProject.PlayerMovement
struct PlayerMovement_t4104002620;
// PlayerShooting
struct PlayerShooting_t3585541508;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerHealth
struct  PlayerHealth_t3877793981  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 PlayerHealth::startingHealth
	int32_t ___startingHealth_2;
	// System.Int32 PlayerHealth::currentHealth
	int32_t ___currentHealth_3;
	// UnityEngine.UI.Slider PlayerHealth::healthSlider
	Slider_t1468074762 * ___healthSlider_4;
	// UnityEngine.UI.Image PlayerHealth::damageImage
	Image_t3354615620 * ___damageImage_5;
	// UnityEngine.AudioClip PlayerHealth::deathClip
	AudioClip_t3714538611 * ___deathClip_6;
	// System.Single PlayerHealth::flashSpeed
	float ___flashSpeed_7;
	// UnityEngine.Color PlayerHealth::flashColour
	Color_t1588175760  ___flashColour_8;
	// UnityEngine.GameObject PlayerHealth::player
	GameObject_t4012695102 * ___player_9;
	// UnityEngine.Animator PlayerHealth::anim
	Animator_t792326996 * ___anim_10;
	// UnityEngine.AudioSource PlayerHealth::playerAudio
	AudioSource_t3628549054 * ___playerAudio_11;
	// UnityProject.PlayerMovement PlayerHealth::playerMovement
	PlayerMovement_t4104002620 * ___playerMovement_12;
	// PlayerShooting PlayerHealth::playerShooting
	PlayerShooting_t3585541508 * ___playerShooting_13;
	// System.Boolean PlayerHealth::isDead
	bool ___isDead_14;
	// System.Boolean PlayerHealth::damaged
	bool ___damaged_15;

public:
	inline static int32_t get_offset_of_startingHealth_2() { return static_cast<int32_t>(offsetof(PlayerHealth_t3877793981, ___startingHealth_2)); }
	inline int32_t get_startingHealth_2() const { return ___startingHealth_2; }
	inline int32_t* get_address_of_startingHealth_2() { return &___startingHealth_2; }
	inline void set_startingHealth_2(int32_t value)
	{
		___startingHealth_2 = value;
	}

	inline static int32_t get_offset_of_currentHealth_3() { return static_cast<int32_t>(offsetof(PlayerHealth_t3877793981, ___currentHealth_3)); }
	inline int32_t get_currentHealth_3() const { return ___currentHealth_3; }
	inline int32_t* get_address_of_currentHealth_3() { return &___currentHealth_3; }
	inline void set_currentHealth_3(int32_t value)
	{
		___currentHealth_3 = value;
	}

	inline static int32_t get_offset_of_healthSlider_4() { return static_cast<int32_t>(offsetof(PlayerHealth_t3877793981, ___healthSlider_4)); }
	inline Slider_t1468074762 * get_healthSlider_4() const { return ___healthSlider_4; }
	inline Slider_t1468074762 ** get_address_of_healthSlider_4() { return &___healthSlider_4; }
	inline void set_healthSlider_4(Slider_t1468074762 * value)
	{
		___healthSlider_4 = value;
		Il2CppCodeGenWriteBarrier(&___healthSlider_4, value);
	}

	inline static int32_t get_offset_of_damageImage_5() { return static_cast<int32_t>(offsetof(PlayerHealth_t3877793981, ___damageImage_5)); }
	inline Image_t3354615620 * get_damageImage_5() const { return ___damageImage_5; }
	inline Image_t3354615620 ** get_address_of_damageImage_5() { return &___damageImage_5; }
	inline void set_damageImage_5(Image_t3354615620 * value)
	{
		___damageImage_5 = value;
		Il2CppCodeGenWriteBarrier(&___damageImage_5, value);
	}

	inline static int32_t get_offset_of_deathClip_6() { return static_cast<int32_t>(offsetof(PlayerHealth_t3877793981, ___deathClip_6)); }
	inline AudioClip_t3714538611 * get_deathClip_6() const { return ___deathClip_6; }
	inline AudioClip_t3714538611 ** get_address_of_deathClip_6() { return &___deathClip_6; }
	inline void set_deathClip_6(AudioClip_t3714538611 * value)
	{
		___deathClip_6 = value;
		Il2CppCodeGenWriteBarrier(&___deathClip_6, value);
	}

	inline static int32_t get_offset_of_flashSpeed_7() { return static_cast<int32_t>(offsetof(PlayerHealth_t3877793981, ___flashSpeed_7)); }
	inline float get_flashSpeed_7() const { return ___flashSpeed_7; }
	inline float* get_address_of_flashSpeed_7() { return &___flashSpeed_7; }
	inline void set_flashSpeed_7(float value)
	{
		___flashSpeed_7 = value;
	}

	inline static int32_t get_offset_of_flashColour_8() { return static_cast<int32_t>(offsetof(PlayerHealth_t3877793981, ___flashColour_8)); }
	inline Color_t1588175760  get_flashColour_8() const { return ___flashColour_8; }
	inline Color_t1588175760 * get_address_of_flashColour_8() { return &___flashColour_8; }
	inline void set_flashColour_8(Color_t1588175760  value)
	{
		___flashColour_8 = value;
	}

	inline static int32_t get_offset_of_player_9() { return static_cast<int32_t>(offsetof(PlayerHealth_t3877793981, ___player_9)); }
	inline GameObject_t4012695102 * get_player_9() const { return ___player_9; }
	inline GameObject_t4012695102 ** get_address_of_player_9() { return &___player_9; }
	inline void set_player_9(GameObject_t4012695102 * value)
	{
		___player_9 = value;
		Il2CppCodeGenWriteBarrier(&___player_9, value);
	}

	inline static int32_t get_offset_of_anim_10() { return static_cast<int32_t>(offsetof(PlayerHealth_t3877793981, ___anim_10)); }
	inline Animator_t792326996 * get_anim_10() const { return ___anim_10; }
	inline Animator_t792326996 ** get_address_of_anim_10() { return &___anim_10; }
	inline void set_anim_10(Animator_t792326996 * value)
	{
		___anim_10 = value;
		Il2CppCodeGenWriteBarrier(&___anim_10, value);
	}

	inline static int32_t get_offset_of_playerAudio_11() { return static_cast<int32_t>(offsetof(PlayerHealth_t3877793981, ___playerAudio_11)); }
	inline AudioSource_t3628549054 * get_playerAudio_11() const { return ___playerAudio_11; }
	inline AudioSource_t3628549054 ** get_address_of_playerAudio_11() { return &___playerAudio_11; }
	inline void set_playerAudio_11(AudioSource_t3628549054 * value)
	{
		___playerAudio_11 = value;
		Il2CppCodeGenWriteBarrier(&___playerAudio_11, value);
	}

	inline static int32_t get_offset_of_playerMovement_12() { return static_cast<int32_t>(offsetof(PlayerHealth_t3877793981, ___playerMovement_12)); }
	inline PlayerMovement_t4104002620 * get_playerMovement_12() const { return ___playerMovement_12; }
	inline PlayerMovement_t4104002620 ** get_address_of_playerMovement_12() { return &___playerMovement_12; }
	inline void set_playerMovement_12(PlayerMovement_t4104002620 * value)
	{
		___playerMovement_12 = value;
		Il2CppCodeGenWriteBarrier(&___playerMovement_12, value);
	}

	inline static int32_t get_offset_of_playerShooting_13() { return static_cast<int32_t>(offsetof(PlayerHealth_t3877793981, ___playerShooting_13)); }
	inline PlayerShooting_t3585541508 * get_playerShooting_13() const { return ___playerShooting_13; }
	inline PlayerShooting_t3585541508 ** get_address_of_playerShooting_13() { return &___playerShooting_13; }
	inline void set_playerShooting_13(PlayerShooting_t3585541508 * value)
	{
		___playerShooting_13 = value;
		Il2CppCodeGenWriteBarrier(&___playerShooting_13, value);
	}

	inline static int32_t get_offset_of_isDead_14() { return static_cast<int32_t>(offsetof(PlayerHealth_t3877793981, ___isDead_14)); }
	inline bool get_isDead_14() const { return ___isDead_14; }
	inline bool* get_address_of_isDead_14() { return &___isDead_14; }
	inline void set_isDead_14(bool value)
	{
		___isDead_14 = value;
	}

	inline static int32_t get_offset_of_damaged_15() { return static_cast<int32_t>(offsetof(PlayerHealth_t3877793981, ___damaged_15)); }
	inline bool get_damaged_15() const { return ___damaged_15; }
	inline bool* get_address_of_damaged_15() { return &___damaged_15; }
	inline void set_damaged_15(bool value)
	{
		___damaged_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
