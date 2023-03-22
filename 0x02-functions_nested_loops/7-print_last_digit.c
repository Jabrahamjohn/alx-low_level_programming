#include <stdio.h>
#include <stdlib.h>

/**
 *print_last_digit - check the code for Holberton School students.
 *@last: value of last digit
 *
 * Return: Always 0.
 */
int print_last_digit(int last)
{
	last = abs(last) % 10;
	{
		putchar(last);
		return (last);
	
}
