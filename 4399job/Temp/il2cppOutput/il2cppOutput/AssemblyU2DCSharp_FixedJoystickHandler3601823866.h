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
// UnityEngine.Events.UnityEvent
struct UnityEvent_t2938797301;
// FixedJoystickHandler/VirtualJoystickEvent
struct VirtualJoystickEvent_t227257747;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FixedJoystickHandler
struct  FixedJoystickHandler_t3601823866  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Transform FixedJoystickHandler::content
	Transform_t284553113 * ___content_2;
	// UnityEngine.Events.UnityEvent FixedJoystickHandler::beginControl
	UnityEvent_t2938797301 * ___beginControl_3;
	// FixedJoystickHandler/VirtualJoystickEvent FixedJoystickHandler::controlling
	VirtualJoystickEvent_t227257747 * ___controlling_4;
	// UnityEngine.Events.UnityEvent FixedJoystickHandler::endControl
	UnityEvent_t2938797301 * ___endControl_5;

public:
	inline static int32_t get_offset_of_content_2() { return static_cast<int32_t>(offsetof(FixedJoystickHandler_t3601823866, ___content_2)); }
	inline Transform_t284553113 * get_content_2() const { return ___content_2; }
	inline Transform_t284553113 ** get_address_of_content_2() { return &___content_2; }
	inline void set_content_2(Transform_t284553113 * value)
	{
		___content_2 = value;
		Il2CppCodeGenWriteBarrier(&___content_2, value);
	}

	inline static int32_t get_offset_of_beginControl_3() { return static_cast<int32_t>(offsetof(FixedJoystickHandler_t3601823866, ___beginControl_3)); }
	inline UnityEvent_t2938797301 * get_beginControl_3() const { return ___beginControl_3; }
	inline UnityEvent_t2938797301 ** get_address_of_beginControl_3() { return &___beginControl_3; }
	inline void set_beginControl_3(UnityEvent_t2938797301 * value)
	{
		___beginControl_3 = value;
		Il2CppCodeGenWriteBarrier(&___beginControl_3, value);
	}

	inline static int32_t get_offset_of_controlling_4() { return static_cast<int32_t>(offsetof(FixedJoystickHandler_t3601823866, ___controlling_4)); }
	inline VirtualJoystickEvent_t227257747 * get_controlling_4() const { return ___controlling_4; }
	inline VirtualJoystickEvent_t227257747 ** get_address_of_controlling_4() { return &___controlling_4; }
	inline void set_controlling_4(VirtualJoystickEvent_t227257747 * value)
	{
		___controlling_4 = value;
		Il2CppCodeGenWriteBarrier(&___controlling_4, value);
	}

	inline static int32_t get_offset_of_endControl_5() { return static_cast<int32_t>(offsetof(FixedJoystickHandler_t3601823866, ___endControl_5)); }
	inline UnityEvent_t2938797301 * get_endControl_5() const { return ___endControl_5; }
	inline UnityEvent_t2938797301 ** get_address_of_endControl_5() { return &___endControl_5; }
	inline void set_endControl_5(UnityEvent_t2938797301 * value)
	{
		___endControl_5 = value;
		Il2CppCodeGenWriteBarrier(&___endControl_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
