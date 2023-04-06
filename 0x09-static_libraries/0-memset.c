#include "main.h"
/**
 * _memset - fills a block of memory with specific values
 * @s: starting address of memory to be filled
 * @b: the so desired value
 * @n: the number of bytes to be changed
 *
 * Return: changes the array with the new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;


	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

