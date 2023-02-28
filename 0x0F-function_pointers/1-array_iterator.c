#include <stdlib.h>

/**
 * array_iterator -  a function that executes the function given as
 * parameter on each element of array.
 * @array: A pointer to the array
 * @size: Size of an array
 * @action: action(function) to iterate throw array
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL || array == NULL)
		return;

	for (; i < size; i++)
		action(array[i]);
}

