#ifndef LISTS_H
#define LISTS_H

/*
 * File: lists.h
 * Auth: ABRAHAM JOHN (aj)
 * Desc: Header file containing prototypes and definitions for functions
 *       and types written in the directory.
 */

#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @mj: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for alx project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *aj);
size_t listint_len(const listint_t *aj);
listint_t *add_nodeint(listint_t **aj, const int mj);
listint_t *add_nodeint_end(listint_t **aj, const int mj);
void free_listint(listint_t *aj);
void free_listint2(listint_t **aj);
int pop_listint(listint_t **aj);
listint_t *get_nodeint_at_index(listint_t *aj, unsigned int index);
int sum_listint(listint_t *aj);
listint_t *insert_nodeint_at_index(listint_t **aj, unsigned int idx, int mj);
int delete_nodeint_at_index(listint_t **aj, unsigned int index);
listint_t *reverse_listint(listint_t **aj);
size_t print_listint_safe(const listint_t *aj);
size_t free_listint_safe(listint_t **aj);
listint_t *find_listint_loop(listint_t *aj);

#endif /* LISTS_H */
