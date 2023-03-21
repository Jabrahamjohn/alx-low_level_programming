#include "holberton.h"

/**
 *print_last_digit - check the code for Holberton School students.
 *@last: value of last digit
 *
 * Return: Always 0.
 */
int print_last_digit(int last)
{
	last = last % 10;
	if (last < 0)
	{
		_putchar((last * -1) + '0');
		return (last * -1);
	}
	_putchar((last) + '0');
	return (last);
}
