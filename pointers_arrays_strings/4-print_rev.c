/**
* print_rev - prints a string
* @s: strings
*
*/


#include <stdio.h>
#include <string.h>
#include "main.h"

void print_rev(char *s)
{
int length = strlen(s);
int i;

for (i = length - 1; i >= 0; i--)
{
printf("%c", s[i]);
}
printf("\n");
}
