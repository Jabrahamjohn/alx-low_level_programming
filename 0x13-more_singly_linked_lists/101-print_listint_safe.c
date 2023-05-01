#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts number of unique nodes
 *                      in a looped listint_t linked list.
 * @aj: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in list.
 */
size_t looped_listint_len(const listint_t *aj)
{
	const listint_t *lion, *tiger;
	size_t nodes = 1;

	if (aj == NULL || aj->next == NULL)
		return (0);

	lion = aj->next;
	tiger = (aj->next)->next;

	while (tiger)
	{
		if (lion == tiger)
		{
			lion = aj;
			while (lion != tiger)
			{
				nodes++;
				lion = tiger->next;
				tiger = tiger->next;
			}

			lion = lion->next;
			while (lion != tiger)
			{
				nodes++;
				lion = lion->next;
			}

			return (nodes);
		}

		lion = lion->next;
		tiger = (tiger->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints listint_t list safely.
 * @aj: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *aj)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(aj);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)aj, aj->n);
			aj = aj->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)aj, aj->n);
			aj = aj->next;
		}

		printf("-> [%p] %d\n", (void *)aj, aj->n);
	}

	return (nodes);
}
