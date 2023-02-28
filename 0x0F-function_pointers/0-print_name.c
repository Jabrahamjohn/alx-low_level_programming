#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - a function prints a name.
 * @name: pointer to the name to print
 * @f: function to print the name
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *name))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
