#include "lists.h"

/**
 * list_len - Finds the number of elements in a custom linked list.
 * @h: A pointer to the head of the custom_list_t list.
 *
 * Return: The number of elements in the linked list.
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
