#include <stdio.h>

int rem1(char*, char*);

int main(int argc, char const *argv[])
{
	char readIn1[20];
	char readIn2[20];
	char custom[] = {'x','w','w','x'};
	fgets(readIn1, 20, stdin);

	rem1(readIn1, readIn2);
	//rem1(custom, readIn2);

	printf("OUTPUT: %s\n", readIn2);
	return 0;
}