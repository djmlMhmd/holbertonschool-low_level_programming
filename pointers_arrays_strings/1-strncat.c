
#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @n:nombre de caract
 * @src:chaine de caractère
 * @dest:chaine de caractère
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
char *p = dest;

while (*p != '\0')
{
p++;
}
while (n-- > 0 && *src != '\0')
{
*p++ = *src++;
}
*p = '\0';
return (dest);
}
