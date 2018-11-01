#include <string.h>

int rem1(char *str1, char *str2)
{
	int strLength = strlen(str1) - 1;
	int j, xCount = 0;

	for (int i = 0; i <= strLength; ++i)
	{
		if (str1[i] == 'x' && xCount == 0)
			xCount++;
		else
		{
			str2[j] = str1[i];
			j++;
		}
	}
	str2[j] = '\0';

	return 0;
}