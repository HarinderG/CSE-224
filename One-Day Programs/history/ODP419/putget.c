/*
	Harinder Gakhal
	11/5/18
	ODP419
	put(int x) will save the value of x in a global variable. The return value
	of the put function should be 0.
	get() will return the value that was most-recently saved by put.
*/

int num;

int put(int x)
{
	num = x;
	return 0;
}

int get()
{
	return num;
}