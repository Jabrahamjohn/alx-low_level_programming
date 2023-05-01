#include "lists.h"

/**
 * reverse_listint - Reverses listint_t list.
 * @head: A pointer to the address of
 *         head of the list_t list.
 *
 * Return: pointer to the head node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *behind;

	if (head == NULL || *head == NULL)
		return (NULL);

	behind = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = ahead;
	}

	(*head)->next = behind;

	return (*head);
}
