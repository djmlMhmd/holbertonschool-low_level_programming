#include <stdio.h>

/**
* main - prints the alphabet in lowercase, and then in uppercase
* Return: Always 0 (Success)
*/

int main(void)
{
char alphabet = 'a';

while (alphabet <= 'z')
{
if (alphabet != 'q' && alphabet != 'e')
{

putchar(alphabet);
}
alphabet++;
}
putchar('\n');
return (0);
}
