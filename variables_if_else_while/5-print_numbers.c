#include <stdio.h>

/**
* main - prints all single digit numbers of base 10 starting from 0
* Return: Always 0 (Success)
*/

int main(void)
{
int num = 0;

while (num < 10)
{
printf("%d", num);
num++;
}
printf("%c", '\n');
return (0);
}
