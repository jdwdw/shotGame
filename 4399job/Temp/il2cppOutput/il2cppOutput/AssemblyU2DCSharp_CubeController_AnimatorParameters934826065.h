#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CubeController/AnimatorParameters
struct  AnimatorParameters_t934826065  : public Il2CppObject
{
public:
	// System.String CubeController/AnimatorParameters::moving
	String_t* ___moving_0;
	// System.String CubeController/AnimatorParameters::horizotal
	String_t* ___horizotal_1;
	// System.String CubeController/AnimatorParameters::vertical
	String_t* ___vertical_2;

public:
	inline static int32_t get_offset_of_moving_0() { return static_cast<int32_t>(offsetof(AnimatorParameters_t934826065, ___moving_0)); }
	inline String_t* get_moving_0() const { return ___moving_0; }
	inline String_t** get_address_of_moving_0() { return &___moving_0; }
	inline void set_moving_0(String_t* value)
	{
		___moving_0 = value;
		Il2CppCodeGenWriteBarrier(&___moving_0, value);
	}

	inline static int32_t get_offset_of_horizotal_1() { return static_cast<int32_t>(offsetof(AnimatorParameters_t934826065, ___horizotal_1)); }
	inline String_t* get_horizotal_1() const { return ___horizotal_1; }
	inline String_t** get_address_of_horizotal_1() { return &___horizotal_1; }
	inline void set_horizotal_1(String_t* value)
	{
		___horizotal_1 = value;
		Il2CppCodeGenWriteBarrier(&___horizotal_1, value);
	}

	inline static int32_t get_offset_of_vertical_2() { return static_cast<int32_t>(offsetof(AnimatorParameters_t934826065, ___vertical_2)); }
	inline String_t* get_vertical_2() const { return ___vertical_2; }
	inline String_t** get_address_of_vertical_2() { return &___vertical_2; }
	inline void set_vertical_2(String_t* value)
	{
		___vertical_2 = value;
		Il2CppCodeGenWriteBarrier(&___vertical_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
