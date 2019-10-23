#include "task2.h"

bool checkPrime(unsigned int val)
{
  for (int i = 2; i < val; i++)
	{
	  if (val % i == 0)
		  return false;
	}
  return true;
}
unsigned long long nextPrime(unsigned long val)
{
  value++;
  while (checkPrime(val) == false)
	  val++;
  return val;
}
unsigned long long nPrime(unsigned n)
{
  int index = 1;
  long num = 2;
  while (index < n)
	{
	  num = nextPrime(num);
	  index++;
	}
  return num;
}
