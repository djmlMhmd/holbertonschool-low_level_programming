#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value of the array (inclusive)
 * @max: maximum value of the array (inclusive)
 *
 * Return: pointer to the newly created array, NULL on failure
 */
int *array_range(int min, int max)
{
int *arr;
int i;

if (min > max)
return (NULL);

arr = malloc(sizeof(int) * (max - min + 1));

if (arr == NULL)
return (NULL);

for (i = 0; i < (max - min + 1); i++)
arr[i] = min + i;

return (arr);
}
