#include "main.h"
#include <stdio.h>

/**
* print_alphabet - print the alphabet
*
* Return: Always 0 (Success)
*/

void print_alphabet(void)
{
char alphabet;

alphabet = 'a';


while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}
putchar('\n');
}
