#include <stdio.h>

/**
* main - A program prints the size of various types on the computer
* Return: Always 0.
*/





int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;

printf("size of char = %z bytes\n", sizeof(a));
printf("size of int = %z bytes\n", sizeof(b));
printf("size of long int = %z bytes\n", sizeof(c));
printf("size of long long int = %z bytes\n", sizeof(d));
printf("size of a float = %z bytes\n", sizeof(e));

return (0);
}
