/**
 * puts_half - Entry point
 * @str: value int points
 *
 */

#include "main.h"
#include <stdio.h>
#include <string.h>

void puts_half(char *str)
{
int len = strlen(str);
int half_len = (len + 1) / 2;
int i;
if (len % 2 == 1)
{
half_len = (len - 1) / 2;
}
for (i = half_len; i < len; i++)
{
printf("%c", str[i]);
}
printf("\n");
}
