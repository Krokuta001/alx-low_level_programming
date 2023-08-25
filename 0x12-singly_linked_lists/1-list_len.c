#include <stddef.h>
#include "lists.h"

/**
 * count_list_elements - returns the count of elements in a linked list
 * @list: pointer to the custom_list_t list
 *
 * Return: count of elements in the list
 */
size_t count_list_elements(const custom_list_t *list)
{
    size_t element_count = 0;

    while (list != NULL)
    {
        element_count++;
        list = list->next;
    }
    
    return element_count;
}

