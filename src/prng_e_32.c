#include "prng_e_32.h"

uint32_t prng_e_32(struct prng_e_32_s *s) {
  uint32_t block = s->blocks[s->b & 1023] + s->a;

  s->a = ((s->a << 17) | (s->a >> 15)) ^ s->b;
  s->b += 1111111111;
  s->blocks[s->b & 1023] += (block << 13) | (block >> 19);
  return block;
}
