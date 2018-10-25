/*
	Harinder Gakhal
	10/25/18
	ODP414
	The function should set out to be a mixture of *a and *b. Specifically,
	out consists of the following (in this order):
		A[0]
		B[0]
		A[1]
		B[1]
		A[2]
		B[2]
		...
*/

#include <stdio.h>
#include <string.h>

void mix(char *a, char *b, char *out)
{
	int length = strlen(a);
	int j = 0;
	for (int i = 0; i < length; ++i)
	{ 
		out[j] = a[i];
		j++;
		out[j] = b[i];
		j++;
	}
	out[j] = '\0';
}