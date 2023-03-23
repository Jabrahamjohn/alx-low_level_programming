#include <stdio.h>

/**
 * times_table -  This program prints the 9 times multiplcation table.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int i, j, r;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			r = i * j;
			if (j > 0)
			{
				if (r < 10)
				putchar(' ');

				else
					putchar(r / 10 + '0');
			}
			putchar(r % 10 + '0');
			if (j < 9)
			{
				putchar(',');
				putchar(' ');
			}
			else
			{
				putchar('\n');
			}
		}
	}
}
