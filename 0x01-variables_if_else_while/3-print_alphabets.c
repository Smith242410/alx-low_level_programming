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
		putchar(value);
	for (value = 'A'; value <= 'Z'; value++)
		putchar(value);
	putchar('\n');
	return (0);
}
