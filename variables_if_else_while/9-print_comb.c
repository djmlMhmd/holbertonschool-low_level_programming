#include <stdio.h>

/**
* main - prints the alphabet in lowercase, and then in uppercase
* Return: Always 0 (Success)
*/

int main(void)
{

int num = 0;
while (num <= 9)
{

putchar('0' + num);
if (num != 9)
{
putchar(',');
putchar(' ');
}

num++;
}

putchar('\n');
return (0);
}
