#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size: size of table
 *
 * Return: memory.
 */
hash_table_t *hash_table_create(unsigned long int size __attribute__((unused)))
{
	hash_table_t *memory = malloc(sizeof(hash_table_t));
	hash_node_t **slow_memory;
	unsigned long int i;

	if (memory == NULL)
	{
		return (NULL);
	}
	slow_memory = malloc(sizeof(char *) * size);
	if (slow_memory == NULL)
	{
		return (NULL);
	}
	memory->size = size;
	memory->array = slow_memory;
	for (i = 0; i < size; i++)
		memory->array[i] = NULL;
	return (memory);
}
