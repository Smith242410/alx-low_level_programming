#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int a, d, i;

	a = 48; 
	d = 48; 
	i = 48;
	while (d < 58)
	{
		a = 48;
		while (a < 48)
		{
			i = 48;
			while (i < 58)
			{
				if (d != a && a != i && d != i && d < a && a < i)
				{
					putchar(d);
					putchar(a);
					putchar(i);
					if (!(d == 55 && a == 56 && i == 57))
					{
						putchar(',');
						putchar(' ');
					}
				}
				i++;
			}
			a++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}
