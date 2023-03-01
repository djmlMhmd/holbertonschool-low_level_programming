/**
 * _strcmp - function that reverses the content of an array of integers.
 * @s1: caratère
 * @s2: caractère
 * Return: s1[i]
 */



#include "main.h"

int _strcmp(char *s1, char *s2)
{
int i = 0;

while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}

if (s1[i] == '\0' && s2[i] == '\0')
{
return (0);
}
else if (s1[i] == '\0')
{
return (-s2[i]);
}
else
{
return (s1[i]);
}
}

