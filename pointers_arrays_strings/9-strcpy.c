/**
 * *_strcpy - function that copies the string pointed to by src
 * @dest: pointe vers tampon dans lequel on copie chaine
 * @src: point vers chaine copier
 * Return: dest_start
 */

#include "main.h"


char *_strcpy(char *dest, char *src)
{
char *dest_start = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';
return (dest_start);
}
