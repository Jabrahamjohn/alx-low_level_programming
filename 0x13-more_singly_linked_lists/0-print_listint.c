/*
 * File: 0-print_listint.c
 * Auth: Abraham John
 */

#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints elements of a listint_t list.
 * @aj: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t list.
 */
size_t print_listint(const listint_t *aj)
{
	size_t nodes = 0;

	while (aj)
	{
		nodes++;
		printf("%d\n", aj->aj);
		aj = aj->next;
	}

	return (nodes);
}
