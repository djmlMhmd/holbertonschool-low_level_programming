/**
 * create_array - Creates an array of chars
 *
 * @size: The size of the array to create
 * @c: The character to use for initializing each element of the array
 *
 * Return: A pointer to the dynamically created array or NULL
 */

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *create_array(unsigned int size, char c)
{
char *array;
int i;
if (size == 0)
{
return (NULL);
}
array = (char *) malloc(size * sizeof(char));
if (array == 0)
{
return (NULL);
}
for (i = 0; i < (int) size; i++)
{
array[i] = c;
}
return (array);
}
