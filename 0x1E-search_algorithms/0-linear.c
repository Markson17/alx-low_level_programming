#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @arr: a pointer to the first element of the array
 * @n: number of elements in array
 * @x: the value to search for
 *
 * Return: Always result
 */

int linear_search(int *arr, size_t n, int x)
{
	size_t result = 0;

	if (arr == NULL)
	{
		return (-1);
	}
	while (result < n)
	{
		printf("Value checked arr[%ld] = [%d]\n", result, arr[result]);
		if (arr[result] == x)
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