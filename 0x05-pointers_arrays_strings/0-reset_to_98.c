#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 98
 */
int main(void)
{
	int x;

	x = 402;
	reset_to_98(&x);
	return (x);
}
