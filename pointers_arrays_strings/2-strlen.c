/**
* _strlen - function that swaps the values of two integers.
* @s: string to check length
* Return: lengh of string as int
*/

#include "main.h"
#include <string.h>

int _strlen(char *s)
{
int len;
len = 0;
while (*(s + len) != '\0')
len++;
return (len);
}
