/*
	Harinder Gakhal
	10/11/18
	This main.c file is used to test pick.c in the same directory.
*/

#include <stdio.h>

int pick(int num);

int main(int argc, char const *argv[])
{
	printf("pick func is %d\n", pick(1));
	printf("pick func is %d\n", pick(2));
	printf("pick func is %d\n", pick(3));
	printf("pick func is %d\n", pick(4));
	printf("pick func is %d\n", pick(5));
	printf("pick func is %d\n", pick(6));
	printf("pick func is %d\n", pick(7));
	return 0;
}