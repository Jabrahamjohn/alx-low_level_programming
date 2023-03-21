#include "holberton.h"

/**
 * _isalpha - checks for alphanumeric characters.
 *@c: It's the variable and you can check if c is lowercase or not.
 *
 *
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 &&  c <= 122))
	{
		return (1);
	}
	else
		return (0);
}
