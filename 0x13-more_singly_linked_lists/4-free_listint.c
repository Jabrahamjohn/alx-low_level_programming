#include "lists.h"

/**
 * free_listint - Frees listint_t list.
 * @aj: pointer to the head of the listint_t list to be freed.
 */
void free_listint(listint_t *aj)
{
	listint_t *tmp;

	while (aj)
	{
		tmp = aj->next;
		free(aj);
		aj = tmp;
	}
}
