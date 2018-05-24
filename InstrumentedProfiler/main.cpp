
#include "Profiler.h"
#include "Examples.h"

int main(void)
{
  PERF_FRAME_START

  
  countfor();
  countwhile();

  countwhile2(10001);
  countfor2(10002);

  squareroot();
  square();

  unsigned p = prime();
  printf("%u prime numbers found.", p);

  PERF_FRAME_END
  PERF_PRINT

  return 0;
}