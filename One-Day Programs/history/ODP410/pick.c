/*
	Harinder Gakhal
	10/11/18
	ODP410
	The function accepts a positive integer (let's call it "n"), and returns:
		* n%4 if n is not a multiple of 4
		* 1 if n is a multiple of 4
*/

#include <stdio.h>
#include<math.h>

int pick(int num)
{
	if (num%4 == 0)
		return 1;
	else
		return num%4;
}