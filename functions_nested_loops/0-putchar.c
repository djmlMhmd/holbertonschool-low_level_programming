#include <stdio.h>

/**
* main - Write a program that prints _putchar, followed by a new line.
* Return: Always 0 (Success)
*/

int main(void)
{

char tab[9] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n'};
int i;
for (i = 0; i < 9; i++)
{
putchar(tab[i]);
}

return (0);
}
