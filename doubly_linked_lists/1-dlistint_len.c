#include "lists.h"

/**
 * dlistint_len - Return the number of nodes in a dlistint_t list
 * @h: Pointer to the head of the dlistint_t list
 *
 * Return: Number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
