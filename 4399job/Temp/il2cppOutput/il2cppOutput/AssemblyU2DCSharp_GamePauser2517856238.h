#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GamePauser
struct  GamePauser_t2517856238  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean GamePauser::paused
	bool ___paused_2;

public:
	inline static int32_t get_offset_of_paused_2() { return static_cast<int32_t>(offsetof(GamePauser_t2517856238, ___paused_2)); }
	inline bool get_paused_2() const { return ___paused_2; }
	inline bool* get_address_of_paused_2() { return &___paused_2; }
	inline void set_paused_2(bool value)
	{
		___paused_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
