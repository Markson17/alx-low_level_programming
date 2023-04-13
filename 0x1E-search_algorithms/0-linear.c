#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: a pointer to the first element of the array
 * @n: number of elements in arrayay
 * @x: the value to search for
 *
 * Return: Always result
 */

int linear_search(int *array, size_t n, int x)
{
	size_t result = 0;

	if (array == NULL)
	{
		return (-1);
	}
	while (result < n)
	{
		printf("Value checked array[%ld] = [%d]\n", result, array[result]);
		if (array[result] == x)
		{
			break;
		}
		result++;
	}
	if (result == n)
		return (-1);
	else
		return (result);
}