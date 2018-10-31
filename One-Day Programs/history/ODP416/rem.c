#include <string.h>

int rem(char *str1, char *str2)
{
	int str1Length = strlen(str1) - 1;
	int j = 0;

	for (int i = 0; i <= str1Length; ++i)
	{
		if (str1[i] != 'x')
		{
			str2[j] = str1[i];
			j++;
		}
	}
	str2[j] = '\0';

	return 0;
}