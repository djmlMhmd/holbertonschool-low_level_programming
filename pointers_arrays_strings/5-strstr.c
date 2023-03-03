#include "main.h"
#include <stddef.h>
/**
 * _strstr - localise une sous-chaîne dans une chaîne
 * @haystack: chaîne dans laquelle chercher
 * @needle: sous-chaîne à chercher
 *
 * Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
int i, j, k;

for (i = 0; haystack[i] != '\0'; i++)
{
k = i;
j = 0;

while (haystack[k] == needle[j] && needle[j] != '\0' && haystack[k] != '\0')
{
k++;
j++;
}

if (needle[j] == '\0')
{
return (haystack + i);
}
}
return (NULL);
}
