#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at a given
 *                           index of listint_t list.
 * @aj: A pointer to the address of the
 *        head of the listint_t list.
 * @index: The index of node to be deleted - indices start at 0.
 *
 * Return: upon success - 1.
 *         upon failure - -1.
 */
int delete_nodeint_at_index(listint_t **aj, unsigned int index)
{
	listint_t *tmp, *copy = *aj;
	unsigned int node;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*aj = (*aj)->next;
		free(copy);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
	}

	tmp = copy->next;
	copy->next = tmp->next;
	free(tmp);
	return (1);
}
