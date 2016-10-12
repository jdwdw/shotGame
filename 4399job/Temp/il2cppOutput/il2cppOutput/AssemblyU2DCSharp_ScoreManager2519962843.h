#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t3286458198;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScoreManager
struct  ScoreManager_t2519962843  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Text ScoreManager::text
	Text_t3286458198 * ___text_3;

public:
	inline static int32_t get_offset_of_text_3() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___text_3)); }
	inline Text_t3286458198 * get_text_3() const { return ___text_3; }
	inline Text_t3286458198 ** get_address_of_text_3() { return &___text_3; }
	inline void set_text_3(Text_t3286458198 * value)
	{
		___text_3 = value;
		Il2CppCodeGenWriteBarrier(&___text_3, value);
	}
};

struct ScoreManager_t2519962843_StaticFields
{
public:
	// System.Int32 ScoreManager::score
	int32_t ___score_2;

public:
	inline static int32_t get_offset_of_score_2() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843_StaticFields, ___score_2)); }
	inline int32_t get_score_2() const { return ___score_2; }
	inline int32_t* get_address_of_score_2() { return &___score_2; }
	inline void set_score_2(int32_t value)
	{
		___score_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
