/**
* times_table - prints the 9 times table, starting with 0.
*
* Return: Always 0
*/



#include <stdio.h>
#include "main.h"
void times_table(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
if (j == 0)
{
printf("%d,", 0);
}
else if (j < 9)
{
printf("%3d,", i * j);
}
else
{
printf("%3d\n", i * j);
}
}
}
}
