#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 *hash_table_set - Adds an element to the hash table.
 *@ht: Pointer to the hash table.
 *@key: Key to be added. Cannot be an empty string.
 *@value: Value associated with the key. Must be duplicated.
 *Return: 1 if it succeeds, 0 otherwise.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int idx;
hash_node_t *new_node, *tmp;

if (ht == NULL || key == NULL || strlen(key) == 0 || value == NULL)
return (0);
idx = key_index((const unsigned char *) key, ht->size);
tmp = ht->array[idx];
while (tmp != NULL)
{
if (strcmp(tmp->key, key) == 0)
{
free(tmp->value);
tmp->value = strdup(value);
if (tmp->value == NULL)
return (0);
return (1);
}
tmp = tmp->next;
}
new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
return (0);
new_node->key = strdup(key);
new_node->value = strdup(value);
if (new_node->key == NULL || new_node->value == NULL)
{
free(new_node->key);
free(new_node->value);
free(new_node);
return (0);
}
new_node->next = ht->array[idx];
ht->array[idx] = new_node;
return (1);
}
