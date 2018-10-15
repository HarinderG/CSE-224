/*
	Harinder Gakhal
	10/15/18
	ODP411
	The function accepts a string; scans it with sscanf to try to convert it to
	an integer; and returns a value as follows:		
		* if the integer=1, return 1
		* if the integer=2, return 2
		* if the integer=3, return 3
		* in all other cases, return -1
*/

#include <stdio.h>

int parse(char *str)
{
	int check;
	int retVal = sscanf(str, "%d", &check);

	if (retVal == 1 && check == 1)
		return 1;
	else if (retVal == 1 && check == 2)
		return 2;
	else if (retVal == 1 && check == 3)
		return 3;
	else
		return -1;
}