#include <stdlib.h>
#include "search_algos.h"

void free_list(listint_t *list);
/**
 * create_list - Creates a single linked list
 *
 * @array: Pointer to the array to use to fill the list
 * @size: Size of the array
 *
 * Return: A pointer to the head of the created list (NULL on failure)
 */
listint_t *create_list(int *array, size_t size)
{
	listint_t *lists;
	listint_t *node;



	lists = NULL;
	while (array && size--)
	{
		node = malloc(sizeof(*node));
		if (!node)
		{
			free_list(lists);
			return (NULL);
		}
		node->n = array[size];
		node->index = size;
		node->next = lists;
		lists = node;
	}
	return (lists);
}
