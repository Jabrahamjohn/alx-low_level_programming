#include "holberton.h"

/**
 * _islower - checks lowercase c.
 *@c: It's the variable and you can check if c is lowercase or not.
 *
 *
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 97 &&  c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
