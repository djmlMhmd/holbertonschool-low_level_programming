/**
 * _strdup - Write a function that returns a pointer
 *
 * @str: The size of the array to create
 *
 * Return: A pointer to the dynamically created array
 */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char *_strdup(char *str)
{
char *duplicate;
if (str == NULL)
{
return (NULL);
}

duplicate = malloc(strlen(str) + 1);

if (duplicate == NULL)
{
return (NULL);
}

strcpy(duplicate, str);

return (duplicate);
}
