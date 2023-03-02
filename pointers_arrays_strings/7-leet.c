/**
 * leet - function that encodes a string into 1337
 * @str: the string to encode
 *
 * Return: the encoded string
 */

#include "main.h"

char *leet(char *str)
{
int i, j;
char letters[] = "aAeEoOtTlL";
char numbers[] = "44337071";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; letters[j] != '\0'; j++)
{
if (str[i] == letters[j])
{
str[i] = numbers[j];
break;
}
}
}

return (str);
}
