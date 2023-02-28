#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - function that returns the sum of a and b.
 * @a: an input integer
 * @b: an input integer
 * Return: The result to sum a + b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that returns the subtract of a and b.
 * @a: an input integer
 * @b: an input integer
 * Return: The result to substract a - b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that returns multiply of a and b.
 * @a: an input integer
 * @b: an input integer
 * Return: The result from  multiply a * b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that returns the divide of a and b.
 * @a: an input integer
 * @b: an input integer
 * Return: The result of divide a / b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - function that returns the module of a and b.
 * @a: an input integer
 * @b: an input integer
 * Return: The result of module a % b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
