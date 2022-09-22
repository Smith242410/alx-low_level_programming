#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}

int _strcmp(char *s1, char *s2)
{
	return (strcmp(s1, s2));
}

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

char *cap_string(char *s)
{
	int i = 0, j;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			if (i == 0)
				*(s + i) -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == *(s + i - 1))
						*(s + i) -= 'a' - 'A';
				}
			}
		}										i++;
	}
	return (s);
}

char *leet(char *s)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == *(s + i))
				*(s + i) = b[j];
		}
	}
	return (s);
}

char *rot13(char *s)
{
	char a[] = "abcdefghijklmnopqrsutvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int x, y, len = strlen(a);

	for (x = 0; *(s + x); x++)
	{
		for (y = 0; y < len; y++)
		{
			if (a[y] == *(s + x))
			{
				*(s + x) = b[y];
				break;
			}
			else
			{
				continue;
			}
		}
	}
	return (s);
}
