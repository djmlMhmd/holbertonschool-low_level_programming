#include <stdlib.h>
#include <stdio.h>
#include "main.h"


/**
 * malloc_checked - allocate memory using malloc
 * @b: size of memory to allocate
 *
 * Return: pointer to allocated memory
 *         exit with status value 98 on failure
 */



void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);

if (ptr == NULL)
{

exit(98);
}

return (ptr);
}
