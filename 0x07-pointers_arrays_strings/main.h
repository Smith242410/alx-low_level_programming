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

char *_strpbrk(char *s, char *accept)
{
	char *ans;

	ans = strpbrk(s, accept);
	return (ans);
}

char *_strstr(char *haystack, char *needle)
{
	char *ans;

	ans = strstr(haystack, needle);
	return (ans);
}

void print_chessboard(char(*a)[8])
{
	int x, y, row, col;

	row = 8;
	col = 8;

	for (x = 0; x < row; x++)
	{
		for (y = 0; y < col; y++)
		{
			if (y == col-1)
			{
				putchar('\n');
			}
			else
			{
				printf("%c", a[x][y]);
			}
		}
	}
}
