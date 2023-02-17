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

printf("size of char %lu bytes\n",(unsigned long) sizeof(a));
printf("size of int %lu bytes\n",(unsigned long) sizeof(b));
printf("size of long int %lu bytes\n",(unsigned long) sizeof(c));
printf("size of long long int %lu bytes\n",(unsigned long) sizeof(d));
printf("size of a float %lu bytes\n",(unsigned long) sizeof(e));

return (0);
}
