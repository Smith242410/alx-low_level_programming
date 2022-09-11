#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char value;

	for (value = '0'; value <= '9'; value++)
		putchar(value);
	for (value = 'a'; value <= 'f'; value++)
		putchar(value);
	putchar('\n');
	return (0);
}
