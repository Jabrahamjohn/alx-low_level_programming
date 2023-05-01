#include "lists.h"

/**
 * add_nodeint - Adds new node at the beginning
 *               of listint_t list.
 * @aj: pointer to the address of the
 *        head of the listint_t list.
 * @mj: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint(listint_t **aj, const int mj)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->mj = mj;
	new->next = *aj;

	*aj = new;

	return (new);
}
