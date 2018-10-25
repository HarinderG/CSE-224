/*
	Harinder Gakhal
	10/25/18
	ODP414
	This main.c file is used to test mix.c in the same directory.
*/

#include <stdio.h>
#include <string.h>

int mix(char*, char*, char*);


int main(int argc, char const *argv[])
{
	char wow[] = {'h','e','l','l','o'};
	char dud[] = {'e','l','b','y', 'z'};
	char joj[20];
	mix(wow,dud,joj);
	printf("%s\n", wow);
	printf("%s\n", dud);
	printf("%s\n", joj);
	int len = strlen(joj);
	printf("THE LENGTH OF JOJ IS : %d\n", len);
	return 0;
}