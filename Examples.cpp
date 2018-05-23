
#include "Profiler.h"

bool countwhile(void)
{
  PERF
  unsigned int i = 0;

  while (i < 10000)
  {
    ++i;
  }

  return true;
}

bool countfor(void)
{
  PERF
  for (unsigned int i = 0; i < 10000; ++i)
  {

  }

  return true;
}
