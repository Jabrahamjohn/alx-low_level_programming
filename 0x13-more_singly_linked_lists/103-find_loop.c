#include "lists.h"

/**
 * find_listint_loop - Finds loop contained on
 *                     listint_t linked list.
 * @aj: A pointer to the head of listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *aj)
{
	listint_t *lion, *tiger;

	if (aj == NULL || aj->next == NULL)
		return (NULL);

	lion = aj->next;
	tiger = (aj->next)->next;

	while (tiger)
	{
		if (lion == tiger)
		{
			lion = aj;

			while (lion != tiger)
			{
				lion = lion->next;
				tiger = tiger->next;
			}

			return (lion);
		}

		lion = lion->next;
		tiger = (tiger->next)->next;
	}

	return (NULL);
}
