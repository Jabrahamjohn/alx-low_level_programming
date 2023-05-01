# MORE SINGLY LINKED LIST

## TASKs
0. Print list

- 0-print_listint.c:
C function that prints all the elements of a listint_t linked list.
Returns the number of nodes in the listint_t list.
1. List interger length

- 1-listint_len.c:
C function that returns the number of elements in a listint_t linked list.
2. Adding  nodes

- 2-add_nodeint.c:
C function that adds a new node at the beginning of a listint_t linked list.
- If the function fails - returns NULL.
- Otherwise - returns the address of the new element.
3. Adding nodes at the end

- 3-add_nodeint_end.c:
C function that adds a new node at the end of a listint_t linked list.
- If the function fails - returns NULL.
- Otherwise - returns the address of the new element.
4. Freeing the lists

- 4-free_listint.c:
C function that frees a listint_t linked list.
5. A Freed lists

- 5-free_listint2.c:
C function that frees a listint_t linked list.
Sets the head to NULL.
6. Poping the head node

- 6-pop_listint.c:
C function that deletes the head node of a listint_t linked list.
- If the linked list is empty - returns 0.
- Otherwise - returns the head node's data (n).
7. index and getting of node

- 7-get_nodeint.c:
C function that locates a given node of a listint_t linked list.
- If the node does not exist - returns NULL.
- Otherwise - returns the located node.
8. Summation of  lists

- 8-sum_listint.c:
C function that returns the sum of all the data (n) of a listint_t linked list.
- If the linked list is empty - returns 0.
- Otherwise - returns the sum of all the data (n).
9. Inserting newer nodes

- 9-insert_nodeint.c:
C function that inserts a new node to a listint_t linked list at a given position.
- If it is not possible to add the new node at index idx, or the function fails - returns NULL.
- Otherwise - returns the address of the new node.
10. Deleting the nodes at index

- 10-delete_nodeint.c:
C function that deletes the node at a given index of a listint_t linked list.
- If the function succeeds - returns 1.
- If the function fails - returns -1.
11. Reversing the linked list

- 100-reverse_listint.c:
C function that reverses a listint_t linked list using a maximum of one loop and two variables.
- Returns a pointer to the first node of the reversed list.
12. Printing the #(safe version)

- 101-print_listint_safe.c:
C function that prints a listint_t linked list safely (ie. can free lists containing loops).
- Returns the number of nodes in the listint_t list.
13. Freeing the node safely #(safe version)

- 102-free_listint_safe.c:
C function that frees a listint_t linked list safely (ie. can free lists containing loops).
- Returns the size of the list that was freed.
- Sets the head to NULL.
14. Finding the loop within the list

- 103-find_loop.c:
C function that finds the loop contained in a listint_t linked list using a maximum of two variables.
- If no loop is found - returns NULL.
- Otherwise - returns the address of the node where the loop starts.
