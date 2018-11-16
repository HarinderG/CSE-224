/*
	Harinder Gakhal
	11/15/2018
	CSE 224
	Programming Assignment 4
	getPhrase.c

	This function will put a phrase in the out array.
*/

#include <stdio.h>

char myGetChar(void);
int endOfPhrase(char c);
int beginningOfPhrase(char c);

int getPhrase(char *out)
{
	char c = myGetChar();
	int outIndex = 0;

	if (c == EOF)
		return 0;
	else
	{
		// Go through stdin until beginning of phrase is found.
		while(!(beginningOfPhrase(c)))
			c = myGetChar();

		// Copy ot out array until end of phrase is reached.
		while(!(endOfPhrase(c)))
		{	
			// If phrase is greater than 200, discard the rest.
			if (outIndex < 200)
				out[outIndex++] = c;
			
			c = myGetChar();
		}

		out[outIndex] = '\0';
		return 1;
	}
}