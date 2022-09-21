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

void reverse_array(int *a, int n)
{
	int temp, start, end;

	start = 0;
	end = n-1;
	while (start < end)
	{
	        temp = a[start];  
	        a[start] = a[end];
	        a[end] = temp;
		start++;
		end--;
	}
}

