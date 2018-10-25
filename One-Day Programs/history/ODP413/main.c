/*
	Harinder Gakhal
	10/23/18
	ODP413
	This main.c file is used to test counte.c in the same directory.
*/

#include <stdio.h>

int counte(char *str);

int main(int argc, char const *argv[])
{
	char readIn[9];
	fgets(readIn, 9, stdin);
	printf("There are %d e(s).\n", counte(readIn));
	return 0;
}