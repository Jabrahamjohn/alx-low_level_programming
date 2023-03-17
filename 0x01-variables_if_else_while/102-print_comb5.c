#include <stdio.h>
/**
 * main - program that prints numbers from 0 to 99.
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i; j < 100; j++)
		{
			int a = i / 10;
			int b = i % 10;
			int c = j / 10;
			int d = j % 10;

			if (i == j)
				continue;
			if (c < a || (c == a && d <= b))
				continue;
			putchar('0' + a);
			putchar('0' + b);
			putchar(' ');
			putchar('0' + c);
			putchar('0' + d);
			putchar(',');
			putchar(' ');
		}
	}
putchar('\n');
return (0);
}

