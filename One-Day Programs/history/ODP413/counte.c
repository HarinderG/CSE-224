/*
	Harinder Gakhal
	10/23/18
	ODP413
	The function accepts a string and counts the number of times a
	lowercase e ('e') occurs in the string.
	counte returns that count as its return value.	
*/
#include <stdio.h>
#include <string.h>

int counte(char *str)
{
	int size = strlen(str) - 2;
	int count = 0;
	printf("the size of the array is %d\n", size);


	for (int i = size; i <= 0; --i)
	{
		printf("%c ", str[i]);

		if (str[i] == 'e')
			count++;
	}
	printf("\n");

	return count;
}