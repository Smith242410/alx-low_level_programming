#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char value;

	for (value = 'a'; value <= 'z'; value++)
		if (value == 'e' || value == 'q')
		{
			continue;
		}
		else
		{
			putchar(value);
		}
	putchar('\n');
	return (0);
}
