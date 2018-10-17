/*
	Harinder Gakhal
	10/16/18
	ODP412
	The function accepts an argc and argv that are passed to main.
	The return value is as follows:
		* if argc != 2 (not equal to 2), return -1
		* if argc==2, then return the following:
			- if argv[1] is not an integer, return -2
			- if argv[1] is an integer but is not positive, return -3
			- otherwise argv[1] is a positive integer: return its value
*/

#include <stdio.h>

int start(int argc, char **argv)
{
	int check;

	if (argc != 2)
		return -1;
	else if (argc == 2)
	{
		if (!(sscanf(argv[1], "%d", &check)))
			return -2;
		else if (check <= 0)
			return -3;
		else
			return check;
	}

	return 0;
}

