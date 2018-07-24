#include <stdint.h>
#include <inttypes.h>
#include <stdio.h>

static inline uint64_t xgetbv(uint32_t ext_ctrl_reg) {
	uint32_t lo, hi;
	__asm__(".byte 0x0F, 0x01, 0xD0" : "=a" (lo), "=d" (hi) : "c" (ext_ctrl_reg));
	return ((uint64_t) hi << 32) | (uint64_t) lo;
}

int main(int argc, char const *argv[])
{
	const uint64_t xfeature_enabled_mask = xgetbv(0);
	printf("%" PRIu64 "\n", xfeature_enabled_mask);
	return 0;
}
