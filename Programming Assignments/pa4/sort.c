/*
	Harinder Gakhal
	11/15/2018
	CSE 224
	Programming Assignment 4
	sort.c

	This function is a simple swap sort for the index, arranging them in acending order by string length.
	The tally array will follow the sort order.
*/

#include <string.h>

void sort(char (*index)[201], int *countArr)
{
	char temp[201]; // Hold the phrase in temp location for swap
	int numTemp;	// Hold the tally count for sawp

	for (int i = 0; i < 1000; ++i)
	{
		for (int j = 0; j < 1000; ++j)
		{
			// Sawp will flip the strings if one is smaller than the other.
			if (strlen(index[i]) < strlen(index[j]))
			{
				strcpy(temp, index[i]);
				numTemp = countArr[i];

				strcpy(index[i], index[j]);
				countArr[i] = countArr[j];

				strcpy(index[j], temp);
				countArr[j] = numTemp;
			}
		}
	}
}
