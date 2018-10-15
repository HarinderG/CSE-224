/*
	Harinder Gakhal
	10/15/18
	This main.c file is used to test parse.c in the same directory.
*/

#include <stdio.h>

int parse(char *);

int main(int argc, char const *argv[])
{
	//char wow[] = {'h','e','l','l','o'};
	//char chars[] = {'2','3'};
	char numWow2[] = {'a'};
	//parse(wow);

	//printf("The return val of parse is: %d\n", parse(numWow));
	//parse(numWow);
	printf("The return val of parse2 is: %d\n", parse(numWow2));
	//parse(numWow2);
	return 0;
}