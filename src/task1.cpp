#include "task1.h"

unsigned long findValue(unsigned int min, unsigned int max) 
{
unsigned long res = 0;
bool fl = 1;
	while (1) 
{
	fl = 1;
	res++;
	for (int i = min; i < max + 1; i++) 
	{
		if (res % i != 0) 
		{
			fl = 0;
			break;
		}
	}
	if (fl == 1)
		break;
}
return res;
}
