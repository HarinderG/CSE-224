/*
	Harinder Gakhal
	10/16/18
	ODP412
	This main.c file is used to test start.c in the same directory.
*/

#include <stdio.h>

int start(int x, char **y);

int main(int argc, char **argv)
{
	printf("Return value of start is: %d\n", start(argc, argv));
	return 0;
}

