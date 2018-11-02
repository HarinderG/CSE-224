#include <string.h>

void move(char *str1, char *str2)
{
	int stringLength = strlen(str1) - 1;

	int j = 1;
	for (int i = 0; i < stringLength; ++i)
	{
		str2[i] = str1[j];
		j++;
	}
	str2[stringLength] = str1[0];
	str2[stringLength+1] = '\0';
}