#include <stdio.h>
#include <string.h>

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}

char *_strchr(char *s, char c)
{
	char *x;

	x = strchr(s, c);
	return (x);
}

unsigned int _strspn(char *s, char *accept)
{
	int len;

	len = strspn(s, accept);
	return (len);
}
