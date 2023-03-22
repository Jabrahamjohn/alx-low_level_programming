#include <stdio.h>

/**
 * print_alphabet  - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a' ; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
}
