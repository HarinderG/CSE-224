#include <stdio.h>

int isInt(char *str)
{
	int check;
	if (!(sscanf(str, "%d", &check)))
	{
		printf("Please enter an integer!\n");
		return 0;
	}
	else
		return 1;
}