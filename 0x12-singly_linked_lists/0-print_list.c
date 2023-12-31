/*
 * File: rewritten-print-list.c
 * Auth: [krokuta]
 */

#include "lists.h"
#include <stdio.h>

/**
 * print_list - Outputs the content of each element in a custom_list_t list.
 * @list: The custom_list_t list.
 *
 * Return: The number of elements in the list.
 */
size_t print_list(const list_t *list)
{
	size_t element_count = 0;

	while (list)
	{
		if (list->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", list->len, list->str);

		element_count++;
		list = list->next;
	}

	return (element_count);
}

