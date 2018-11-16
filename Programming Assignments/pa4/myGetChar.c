/*
	Harinder Gakhal
	11/15/2018
	CSE 224
	Programming Assignment 4
	myGetChar.c

	This will get a char from stdio filter it, conver to upper case and then return it.
*/

#include <ctype.h>
#include <stdio.h>

char myGetChar(void)
{
	char c = getchar();

	// Things to ignore when getting the char
	while(c == '(' || c == ')' || c == '\'' || c == '\"' || c == '-')
		c = getchar();

	// Convert letter to uppercase
	if (islower(c))
		c = toupper(c);

	// Convert all white spaces to space
	if (isspace(c))
		c = ' ';
	
	return c;
}