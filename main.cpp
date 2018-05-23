
#include "Profiler.h"
#include "Examples.h"

int main(void)
{
  PERF_FRAME_START

  countwhile();
  countfor();

  PERF_FRAME_END
  PERF_PRINT

  return 0;
}