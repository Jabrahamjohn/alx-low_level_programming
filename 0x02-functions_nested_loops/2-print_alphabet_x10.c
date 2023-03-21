#include "holberton.h"

/**
 * print_alphabet_x10 - check the code for Holberton School students.
 *
 *
 */
void print_alphabet_x10(void)
{
	char a;
	int n = 1;

	while (n <= 10)
	{
		(n++);

		for (a = 'a' ; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
