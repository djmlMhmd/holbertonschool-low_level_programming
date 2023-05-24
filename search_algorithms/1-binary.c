#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where the value is located,
 *         or -1 if the value is not present or if the array is NULL.
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int mid;
	int i;

		while (left <= right)
	{
		mid = (left + right) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i != right)
	{
		printf(", ");
	}
	}
		printf("\n");

		if (array[mid] == value)
		{
		return (mid);
	}
		else if (array[mid] < value)
	{
		left = mid + 1;
	}
		else
	{
		right = mid - 1;
	}
	}
		return (-1);
}
