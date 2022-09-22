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

char *leet(char *var)
{
	int len = strlen(var), x = 0;

	while (x < len)
	{
		if (var[x] == 'a' || var[x] == 'A')
		{
			var[x] = '4';
		}
		else if (var[x] == 'e' || var[x] == 'E')
		{
			var[x] = '3';
		}
		else if (var[x] == 'o' || var[x] == 'O')
		{
			var[x] = '0';
		}
		else if (var[x] == 't' || var[x] == 'T')
		{
			var[x] = '7';
		}
		else if (var[x] == 'l' || var[x] == 'L')
		{
			var[x] = '1';
		}
		else
		{
			continue;
		}
		x++;
	}
	return (var);
}
