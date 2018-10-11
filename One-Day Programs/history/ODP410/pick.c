#include <stdio.h>
#include<math.h>

int pick(int num)
{
	if (num%4 == 0)
		return 1;
	else
		return num%4;
}