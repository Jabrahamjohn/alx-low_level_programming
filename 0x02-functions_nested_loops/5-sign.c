#include <stdio.h>

/**
 * print_sign - checks for alphanumeric characters.
 *@n: used as a variable
 *
 * Return: 1, 0, or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}

	return (0);
}
