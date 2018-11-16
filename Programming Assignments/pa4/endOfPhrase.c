/*
	Harinder Gakhal
	11/15/2018
	CSE 224
	Programming Assignment 4
	endOfPhrase.c

	This function will return a 1 if the end of a phrase is found, otherwise return 0.
*/

#include <stdio.h>

int endOfPhrase(char c)
{
	if (c == '.' || c == ',' || c == ';' || c == ':' || c == '?' || c == '!' || c == EOF)
		return 1;
	else
		return 0;
}