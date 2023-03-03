#include "main.h"


/**
 * _strspn - calcule la longueur d'une sous-chaîne préfixe.
 * @s: chaîne d'entrée
 * @accept: octets à chercher dans s
 *
 * Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0, j = 0, count = 0;

while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0' && s[i] != accept[j])
j++;
if (accept[j] == '\0')
return (count);
count++;
(i++);
}
return (count);
}
