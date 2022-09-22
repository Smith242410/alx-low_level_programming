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
