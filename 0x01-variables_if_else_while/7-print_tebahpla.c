#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char value;

	for (value = 'z'; value >= 'a'; value--)
		putchar(value);
	putchar('\n');
	return (0);
}
