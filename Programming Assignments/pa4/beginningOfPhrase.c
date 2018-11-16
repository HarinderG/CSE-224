/*
	Harinder Gakhal
	11/15/2018
	CSE 224
	Programming Assignment 4
	beginningOfPhrase.c

	This function will return a 1 if the beginning of a phrase is found, otherwise it returns 0.
*/

int beginningOfPhrase(char c)
{
	if (c != ' ' && c != '.' && c != ',' && c != ';' && c != ':' && c != '?' && c != '!')
		return 1;
	else
		return 0;
}