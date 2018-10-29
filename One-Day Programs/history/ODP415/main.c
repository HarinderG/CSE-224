/*
	Harinder Gakhal
	10/29/18
	ODP415
	This main.c file is used to test calc.c in the same directory.
*/

#include <stdio.h>

int calc(char*);

int main(int argc, char const *argv[])
{
	char oper[10];
	fgets(oper, 10, stdin);
	printf("ANSWER:%d\n", calc(oper));
	return 0;
}