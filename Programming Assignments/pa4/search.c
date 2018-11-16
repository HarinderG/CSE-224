/*
	Harinder Gakhal
	11/15/2018
	CSE 224
	Programming Assignment 4
	search.c
	
	This function will return the index of the string its trying to find in the 2D array or chars.
*/

#include <string.h>

int search(char *find, char (*index)[201])
{	
	// Goes through the whole 2D array to find a match.
	for (int i = 0; i < 1000; ++i)
	{
		if (!(strcmp(find, index[i])))
			return i;
	}
	
	//if not found
	return -1;
}