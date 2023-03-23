#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - searches for an integer
 * @array: array of integers to search
 * @size: size of the array
 * @cmp: pointer to the function to compare values
 * Return: index of the first element for which cmp function
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || cmp == NULL)
{
return (-1);
}

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
