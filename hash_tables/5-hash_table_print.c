#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i, comma = 0;
hash_node_t *node = NULL;

if (ht == NULL)
return;

printf("{");
for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
while (node != NULL)
{
if (comma == 1)
printf(", ");
printf("'%s': '%s'", node->key, node->value);
comma = 1;
node = node->next;
}
}
printf("}\n");
}
