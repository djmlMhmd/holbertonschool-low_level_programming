#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * key_index - gives the index of a key in a hash table array
 * @key: the key to look for
 * @size: the size of the hash table array
 *
 * Return: the index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash = hash_djb2(key);
return (hash % size);
}
