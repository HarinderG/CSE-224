#include <stdio.h>

int rem(char*, char*);

int main(int argc, char const *argv[])
{
	char readIn1[20];
	char readIn2[20];
	fgets(readIn1, 10, stdin);

	rem(readIn1, readIn2);

	printf("OUTPUT: %s\n", readIn2);
	return 0;
}