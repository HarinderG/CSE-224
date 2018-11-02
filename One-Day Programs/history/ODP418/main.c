#include <stdio.h>
#include <string.h>

int move(char*, char*);

int main(int argc, char const *argv[])
{
	char str[20] = {'b','r','o','l','g', 'd'};
	char newStr[20];
	//fgets(str, 20, stdin);
	//int stringLength = strlen(str);
	//str[stringLength - 1] = '\0'; // Removes the new line from str because of 'fgets'

	move(str,newStr);

	printf("OLD: %s\nNEW: %s\n", str, newStr);

	return 0;
}