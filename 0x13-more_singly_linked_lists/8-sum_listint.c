#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the
 *               data (n) of a listint_t list.
 * @aj: pointer to the head of the listint_t list.
 *
 * Return: If the list is empty - 0.
 *         Otherwise - the sum of all the data.
 */
int sum_listint(listint_t *aj)
{
	int sum = 0;

	while (aj)
	{
		sum += aj->n;
		head = aj->next;
	}

	return (sum);
}
