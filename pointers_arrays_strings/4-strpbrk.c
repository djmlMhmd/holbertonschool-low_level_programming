#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - recherche une chaîne pour un ensemble d'octets.
 * @s: chaîne d'entrée
 * @accept: octets à chercher dans s
 *
 * Return: (NULL)
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (s + i);
}
}
}

return (NULL);
}
