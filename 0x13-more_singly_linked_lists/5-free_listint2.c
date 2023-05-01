#include "lists.h"

/**
 * free_listint2 - Frees listint_t list.
 * @aj: pointer to the address of the
 *        head of the listint_t list.
 *
 * Description: Sets the head to NULL.
 */
void free_listint2(listint_t **aj)
{
	listint_t *tmp;

	if (aj == NULL)
		return;

	while (*aj)
	{
		tmp = (*aj)->next;
		free(*aj);
		*aj = tmp;
	}

	aj = NULL;
}
