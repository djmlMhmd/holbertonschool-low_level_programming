#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dlistint - Print all elements of a dlistint_t list
 * @h: Pointer to the head of the dlistint_t list
 *
 * Return: Number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}

	return (count);
}