#include <stdio.h>

/**
* main - print the alphabet in lowercase
*
* Return: Always 0 (Success)
*/

int main(void)
{
char alphabet;

alphabet = 'a';


printf("Lowercase alphabets:\n");
while (alphabet <= 'z')
{
printf("%c", alphabet);
alphabet++;
}

return (0);
}
