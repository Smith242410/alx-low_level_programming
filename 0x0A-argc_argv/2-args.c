#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Returns: Always 0.
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return 0;
}
