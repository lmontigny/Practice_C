// define your own xorshift rand function.

static unsigned long g_rand_state = 0;

unsigned long defensive_rand()
{
  uint32_t x = g_rand_state;
  x ^= x << 13;
  x ^= x >> 17;
  x ^= x << 5;
  /* restrict to 32-bits */
  x &= 0xFFFFFFFF;
  return (g_rand_state = x);
}
