#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of the doubly linked list
 * @idx: index of the list where the new node should be added
 * @n: data for the new node
 * Return: address of the new node or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *temp = *h;
unsigned int i = 0;
if (!h)
return (NULL);
new_node = malloc(sizeof(dlistint_t));
if (!new_node)
return (NULL);
new_node->n = n;
if (idx == 0)
{
new_node->prev = NULL;
new_node->next = temp;
if (temp)
temp->prev = new_node;
*h = new_node;
return (new_node);
}
while (i < idx - 1)
{
if (!temp)
{
free(new_node);
return (NULL);
}
temp = temp->next;
i++;
}
new_node->next = temp->next;
new_node->prev = temp;
if (temp->next)
temp->next->prev = new_node;
temp->next = new_node;
return (new_node);
}
