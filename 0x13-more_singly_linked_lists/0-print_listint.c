/*
 * File: 0-print_listint.c
 * Auth: Abraham John
 */

#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints elements of a listint_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		printf("%d\n", h->h);
		h = h->next;
	}

	return (num);
}
