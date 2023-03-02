/**
 * cap_string - function that capitalizes all words
 * @str: the string to capitalize
 *
 * Return: str
 */

#include "main.h"
#include <ctype.h>

char *cap_string(char *str)
{
int i;

str[0] = toupper(str[0]);
for (i = 1; str[i] != '\0'; i++)
{
if (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '\"' ||
str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
str[i - 1] == '}')
{
str[i] = toupper(str[i]);
}
}

return (str);
}
