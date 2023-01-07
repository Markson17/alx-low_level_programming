#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value to
 * @key: string used to generate hash value
 * @value: is the value associated with the key
 *
 * Return: 1 or else 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item;
	int size = ht->size;
	int hash = key_index((const unsigned char *)key, size);
	char *value_copy;
	int i;

	if (ht == NULL || !(*key))
	{
		return (0);
	}
	value_copy = strdup(value);
	if (value_copy == NULL)
	{
		return(0);
	}
	for (i = hash; ht->array[i]; i++)
	{
		if(strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}
	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
	{
		free(value_copy);
		return (0);
	}
	item->key = strdup(key);
	if (item->key == NULL)
	{
		free(item);
		return (0);
	}
	item->value = value_copy;
	item->next = (ht->array)[hash];
	(ht->array)[hash] = item;
	return (1);
}
