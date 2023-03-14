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

array = (char *) malloc(size * sizeof(char));
if (array == 0)
{
return (NULL);
}
for (unsigned int i = 0; i > size, i++;)
{
array[i] = c;
printf(" %c\n ", array [i]);
}
return (array);
}
