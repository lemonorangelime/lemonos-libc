#pragma once

#include <stdint.h>

enum {
	FPU = 1,
	MMX,
	AMD3DNOW, // 3DNow!
	SSE,
	SSE2,
	SSE3,
	SSSE3,
	SSE4_1,
	SSE4_2,
	SSE4A,
	AVX,
	AVX2,
	AVX512,
};

#define SSE4A_MASK 0b1000000
#define SSE4_2_MASK 0b100000000000000000000
#define SSE4_1_MASK 0b10000000000000000000
#define SSSE3_MASK 0b1000000000
#define SSE3_MASK 0b1
#define SSE2_MASK 0b100000000000000000000000000
#define SSE_MASK 0b10000000000000000000000000

#define AVX512_MASK 0
#define AVX2_MASK 0b100000
#define AVX_MASK 0b10000000000000000000000000000

#define FPU_MASK 0b1
#define MMX_MASK 0b100000000000000000000000
#define AMD3DNOW_MASK 0b10000000000000000000000000000000

void cpuid(int parameter, uint32_t * eax, uint32_t * ebx, uint32_t * ecx, uint32_t * edx);
void cpu_get_vendor_name(void * vendor);
void cpu_get_model_name(void * model);
int cpu_supports(int flag);
void __cpufeats_init();
