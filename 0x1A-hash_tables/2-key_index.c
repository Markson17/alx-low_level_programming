#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: string used to generate hash value
 * @size: size of the array of the hash table
 *
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int l = hash_djb2(key);
	unsigned long int index = l % size;

	return (index);
}
