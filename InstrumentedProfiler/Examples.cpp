
#include "Profiler.h"
#include "Examples.h"

bool stub(void)
{
  return true;
}

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
  for (unsigned int i = 0; i < 10000;)
  {
    ++i;
  }

  return true;
}

bool countwhile2(int amount)
{
  PERF
    unsigned int i = 0;

  while (i < amount)
  {
    ++i;
  }

  return true;
}

bool countfor2(int amount)
{
  PERF
    for (unsigned int i = 0; i < amount;)
    {
      ++i;
    }

  return true;
}

bool squareroot(void)
{
  PERF

  for (unsigned i = 0; i < 255; ++i)
  {
    sqrt((double)i);
  }

  return true;
}

bool square(void)
{
  PERF

  for (unsigned i = 0; i < 255; ++i)
  {
    double p = pow((double)i, (double)i);
    //printf("%d squared is %d", (double)i, p);
  }

  return true;
}

unsigned prime(void)
{
  PERF

  unsigned div = 0;
  unsigned nPrime = 0;

  for (unsigned pNum = 1; pNum < 100000; ++pNum)
  {
    div = 0;
    for (unsigned i = 1; i < pNum; ++i)
    {
      if (pNum % i == 0)
        ++div;
    }

    if (div < 2)
    {
      ++nPrime;
      //printf("%u is prime.\n", pNum);
    }
  }

  return nPrime;
}
