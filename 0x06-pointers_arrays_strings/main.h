#include <stdio.h>
#include <string.h>

char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
