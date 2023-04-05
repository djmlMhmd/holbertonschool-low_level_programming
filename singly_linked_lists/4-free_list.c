#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Free all nodes of a linked list
 * @head: Pointer to the head of the linked list
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *temp_node;

	while (head != NULL)
	{
		temp_node = head;
		head = head->next;
		free(temp_node->str);
		free(temp_node);
	}
}
