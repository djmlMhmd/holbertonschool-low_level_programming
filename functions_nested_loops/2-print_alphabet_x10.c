#include "main.h"
#include <stdio.h>

/**
 * main - print the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
char alphabet;
int i;

for (i = 1; i <= 10; i++)
{

alphabet = 'a';

while (alphabet <= 'z')

{
putchar(alphabet);
alphabet++;
}
putchar('\n');
}
}
