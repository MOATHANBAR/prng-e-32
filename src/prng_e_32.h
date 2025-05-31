#ifndef PRNG_E_32_H
#define PRNG_E_32_H

#include <stdint.h>

struct prng_e_32_s {
  uint32_t blocks[1024];
  uint32_t a;
  uint32_t b;
};

uint32_t prng_e_32(struct prng_e_32_s *s);

#endif
