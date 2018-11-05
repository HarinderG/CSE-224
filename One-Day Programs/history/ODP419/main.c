/*
	Harinder Gakhal
	11/5/18
	ODP419
	This main.c file is used to test putget.c in the same directory.
*/

#include <stdio.h>

int put(int);
int get();

int num;

int main(int argc, char const *argv[])
{
	int testNum = 9;
	put(testNum);
	printf("%d\n", num);
	printf("get func %d\n", get());
	return 0;
}