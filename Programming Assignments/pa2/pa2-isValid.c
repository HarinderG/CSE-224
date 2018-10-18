#include <stdio.h>

int isValid(char *str)
{
	extern int totalSticks;
	if (!(sscanf(str, "%d", &totalSticks)))
	{
		printf("Please enter an integer!\n");
		return 0;
	}
	else if (totalSticks < 10)
	{
		printf("Your number must be greater than or equal to 10!\n");
		return 0;
	}
	else
		return 1;
}