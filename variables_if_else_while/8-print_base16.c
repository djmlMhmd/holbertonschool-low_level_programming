#include <stdio.h>

/**
* main - prints the alphabet in lowercase, and then in uppercase
* Return: Always 0 (Success)
*/

int main(void)
{
char alphabet = '0';
int num = 0;
while (num <= 9)
{

putchar('0' + num);

num++;
}
alphabet = 'a';
while (alphabet <= 'f')
{

putchar(alphabet);

alphabet++;
}
putchar('\n');
return (0);
}
