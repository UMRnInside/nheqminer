
#ifndef _SSE2_SIMDE_H_
#define _SSE2_SIMDE_H_


// WARNING: Some instructions were not impleted!
#include "sse2.h"
//#include "sse4.1.h" 

#define __m128i simde__m128i
#define _mm_add_epi64 simde_mm_add_epi64
#define _mm_alignr_epi8 simde_mm_alignr_epi8
#define _mm_blend_epi16 simde_mm_blend_epi16
#define _mm_castps_si128 simde_mm_castps_si128
#define _mm_castsi128_ps simde_mm_castsi128_ps
#define _mm_load_si128 simde_mm_load_si128
#define _mm_loadu_si128 simde_mm_loadu_si128
//#define _mm_roti_epi64 simde_mm_roti_epi64
#define _mm_set_epi64x simde_mm_set_epi64x
#define _mm_setr_epi8 simde_mm_setr_epi9
#define _mm_shuffle_epi32 simde_mm_shuffle_epi32
#define _mm_shuffle_epi8 simde_mm_shuffle_epi8
#define _mm_store_si128 simde_mm_store_si128
#define _mm_storeu_si128 simde_mm_storeu_si128
#define _mm_unpackhi_epi64 simde_mm_unpackhi_epi64
#define _mm_unpacklo_epi64 simde_mm_unpacklo_epi64
#define _mm_xor_si128 simde_mm_xor_si128

#define _mm_set_epi32 simde_mm_set_epi32
#define _mm_slli_epi64 simde_mm_slli_epi64
#define _mm_srli_epi64 simde_mm_srli_epi64

#endif
