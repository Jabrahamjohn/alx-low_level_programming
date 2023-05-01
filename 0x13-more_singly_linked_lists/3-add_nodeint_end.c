#include "lists.h"

/**
 * add_nodeint_end - Adds new node to the
 *                   end of listint_t list.
 * @aj: pointer to the address of the
 *        head of the listint_t list.
 * @mj: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **aj, const int mj)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->mj = mj;
	new->next = NULL;

	if (*aj == NULL)
		*aj = new;

	else
	{
		last = *aj;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*aj);
}
