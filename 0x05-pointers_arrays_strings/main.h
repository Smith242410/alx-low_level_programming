#include <string.h>

void reset_to_98(int *n)
{
	*n = 98;
}

void swap_int(int *a, int *b)
{
	int x;

	x = *b;
	*b = *a;
	*a = x;
}

int _strlen(char *s)
{
	int res;

	res = strlen(s);
	return (res);
}
