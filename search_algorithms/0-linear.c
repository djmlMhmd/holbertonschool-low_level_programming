#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index of the first occurrence or -1 if the value is not present
 * or if the array is NULL.
 */

int linear_search(int *array, size_t size, int value)
{
		size_t i;
		if (array == NULL)
		return -1;

		for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
		return i;
	}

		return -1;
}
