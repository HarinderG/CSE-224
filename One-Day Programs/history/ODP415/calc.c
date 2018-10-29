/*
	Harinder Gakhal
	10/29/18
	ODP415
	The argument should be a string in the form:
	number op number
	with no spaces anywhere

	Number must be an integer
	op is one of + - * /
	Your function must parse this string, perform the operation, and return
	the calculated value.
	Additionally, if you cannot parse the string successfully (using "%d%c%d"), return -1. 
	If it parses successfully but the operator is not one of + - * or /, return -2.
*/

#include <stdio.h>

int calc(char *str)
{
	int num1, num2;
	char opp;
	int retVal = sscanf(str, "%d%c%d", &num1, &opp, &num2);
	//printf("num1=%d opp=%c num2=%d retVal=%d\n", num1, opp, num2, retVal);

	if (retVal == 3)
	{
		switch(opp)
		{
			case '+':
				return num1+num2;
			case '-':
				return num1-num2;
			case '*':
				return num1*num2;
			case '/':
				return num1/num2;
			default:
				return -2;
		}
	}
	else
	{
		return -1;
	}
}