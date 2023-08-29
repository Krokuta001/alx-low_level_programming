/*
 * File  0-print_listint.c
 * Auth: Krokuta
 */

#include "lists.h"
#include <stdio.h>

/**
 * display_list_elements - Outputs the contents of a listint_t list.
 * @head: A pointer to the starting node of the listint_t list.
 *
 * Returns: The count of nodes in the listint_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
