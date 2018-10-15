#include <stdio.h>

void printSticks(int stickCount)
{
	for (int i = 0; i < stickCount; ++i)
	{
		printf("|");
	}
	printf(" (%d)\n", stickCount);
}