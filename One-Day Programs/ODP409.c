/*
	Harinder Gakhal
	10/09/2018
	CSE 224
	ODP409
	For ODP409, you will modify your code from ODP408 to do full error checking:
	* If there is not exactly one argument given on the command line,
		print ERR\n and exit (use argc to check this)
	* If the argument is given but is not a valid double-precision number,
		print INV\n and exit (check the return value from sscanf)
	* If the argument is a valid real, but is negative,
		print NEG\n and exit (just use an if statement)
	* Otherwise, print the square root with "%lf\n" and exit (same as ODP408).
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	double num;
	sscanf(argv[1], "%lf", &num);
	num = sqrt(num);
	printf("%lf\n", num);
	
	return 0;
}