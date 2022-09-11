#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int value = 48;

	while (value < 58)
	{
		putchar(value);
		value++;
	}
	putchar('\n');
	return (0);
}
