/**
 * string_toupper - function that changes all lowercase letters
 * @str: caractère
 * Return: str
 */


#include <ctype.h>
#include "main.h"

char *string_toupper(char *str)
{
int i = 0;
while (str[i] != '\0')
{
str[i] = toupper(str[i]);
i++;
}
return (str);
}
