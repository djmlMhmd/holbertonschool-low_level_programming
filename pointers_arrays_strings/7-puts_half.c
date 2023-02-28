/**
 * puts_half - check the code
 * @str: value int points
 * Return: Always 0.
 */


#include <stdio.h>
#include <string.h>
#include "main.h"

void puts_half(char *str)
{
int len = strlen(str);
int half_len = (len + 1) / 2;
int i;

for (i = half_len; i < len; i++)
{
printf("%c", str[i]);
}
printf("\n");
}
