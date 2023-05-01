#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @aj: A pointer to the address of
 *        the head of the list_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **aj)
{
	listint_t *aj, *behind;

	if (aj == NULL || *aj == NULL)
		return (NULL);

	behind = NULL;

	while ((*aj)->next != NULL)
	{
		aj = (*aj)->next;
		(*aj)->next = behind;
		behind = *head;
		*aj = aj;
	}

	(*head)->next = behind;

	return (*aj);
}
