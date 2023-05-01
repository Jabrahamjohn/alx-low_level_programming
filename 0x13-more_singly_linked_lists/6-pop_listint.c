#include "lists.h"

/**
 * pop_listint - Deletes head node in a listint_t list.
 * @aj: pointer to the address of the
 *        head of the listint_t list.
 *
 * Return: If linked list is empty - 0.
 *         Otherwise - The head node's data (n).
 */
int pop_listint(listint_t **aj)
{
	listint_t *tmp;
	int ret;

	if (*aj == NULL)
		return (0);

	tmp = *aj;
	ret = (*aj)->n;
	*aj = (*aj)->next;

	free(tmp);

	return (ret);
}
