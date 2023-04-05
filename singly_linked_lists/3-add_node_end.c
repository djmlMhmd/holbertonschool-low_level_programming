#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Add a new node at the end of a linked list
 * @head: Pointer to a pointer to the head of the linked list
 * @str: String to be stored in the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp_node;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp_node = *head;
	while (temp_node->next != NULL)
		temp_node = temp_node->next;

	temp_node->next = new_node;

	return (new_node);
}
