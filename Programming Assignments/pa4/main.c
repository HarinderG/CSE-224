/*
	Harinder Gakhal
	11/15/2018
	CSE 224
	Programming Assignment 4
	main.c
*/

#include <string.h>
#include <stdio.h>

// FUNCTIONS (function details will be in the .c files)
char myGetChar(void);
int beginningOFPhrase(char c);
int endOfPhrase(char c);
int getPhrase(char *);
int search(char *str1, char (*a)[201]);
int sort(char (*a)[201], int *arr);

int main(int argc, char const *argv[])
{
	// initialize
	char phraseIndex[1000][201];
	int tallyCount [1000] = {0};
	char temp[201];
	int count = 0;

	// Parse the file from stdin until EOF is reached.
	while(getPhrase(temp))
	{
		// If the phrase already exists in out index
		if (search(temp, phraseIndex) == -1)
		{	
			// place it in the index
			strcpy(phraseIndex[count++], temp);
			// and start a tally
			tallyCount[search(temp,phraseIndex)] = 1;
		}
		else
			// if it already exists, increment the tally count
			tallyCount[search(temp,phraseIndex)]++; 
	}

	// Sort the index and tallyCount
	sort(phraseIndex, tallyCount);

	// Print the index and tally count
	for (int i = 0; i < 1000; ++i)
	{
		if (tallyCount[i] > 0)
			printf("%.5d  <%s>\n",tallyCount[i], phraseIndex[i]);
	}

	return 0;
}