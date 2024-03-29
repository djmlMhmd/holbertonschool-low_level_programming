#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index
 * @head: A pointer to the head of the dlistint_t list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if successful, -1 if not.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current_node, *prev_node;
unsigned int i;

if (head == NULL || *head == NULL)
return (-1);

current_node = *head;
if (index == 0)
{
*head = current_node->next;
if (current_node->next != NULL)
current_node->next->prev = NULL;
free(current_node);
return (1);
}
for (i = 0; i < index && current_node != NULL; i++)
{
prev_node = current_node;
current_node = current_node->next;
}

if (current_node == NULL)
return (-1);

prev_node->next = current_node->next;

if (current_node->next != NULL)
current_node->next->prev = prev_node;

free(current_node);

return (1);
}
