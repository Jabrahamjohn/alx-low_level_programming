#include "lists.h"

/**
 * get_nodeint_at_index - Locates given node on
 *                        a listint_t linked list.
 * @aj: pointer to the head of the listint_t list.
 * @index: The index of the node to locate - indices start at 0.
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - the located node.
 */
listint_t *get_nodeint_at_index(listint_t *aj, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (aj == NULL)
			return (NULL);

		aj = aj->next;
	}

	return (aj);
}
