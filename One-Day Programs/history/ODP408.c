/*
	Harinder Gakhal
	10/05/2018
	CSE 224
	ODP408
	The program expects a command-line argument, which is a real number (double)
	and prints its square root.
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