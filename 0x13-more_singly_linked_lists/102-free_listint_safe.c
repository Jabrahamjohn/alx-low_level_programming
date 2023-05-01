#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - Counts number of unique nodes
 *                      in the looped listint_t linked list.
 * @aj: pointer to the head of listint_t to be check.
 *
 * Return: If the list is'nt looped - 0.
 *         Otherwise - the number of unique nodes on the list.
 */
size_t looped_listint_count(listint_t *aj)
{
	listint_t *lion, *tiger;
	size_t nodes = 1;

	if (aj == NULL || aj->next == NULL)
		return (0);

	lion = aj->next;
	tiger = (aj->next)->next;

	while (tiger)
	{
		if (lion == tiger)
		{
			lion = head;
			while (lion != tiger)
			{
				nodes++;
				lion = lion->next;
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
 * free_listint_safe - Frees listint_t list safely (ie.
 *                     frees lists containing loops)
 * @aj: pointer to the address of
 *     the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 *
 * Description: The function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **aj)
{
	listint_t *tmp;
	size_t nodes, index;

	nodes = looped_listint_count(*aj);

	if (nodes == 0)
	{
		for (; aj != NULL && *aj != NULL; nodes++)
		{
			tmp = (*aj)->next;
			free(*aj);
			*aj = tmp;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			tmp = (*aj)->next;
			free(*aj);
			*aj = tmp;
		}

		*aj = NULL;
	}

	aj = NULL;

	return (nodes);
}
