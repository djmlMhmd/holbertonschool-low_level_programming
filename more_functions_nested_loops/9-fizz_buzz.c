/**
 * main - print fizz multiple 3 & buzz de 5
 * Return: 0
 */


#include <stdio.h>

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (!(i % 3) && !(i % 5))
{
printf("%9s", "FizzBuzz");
}
else if (!(i % 3))
{
printf("%5s ", "Fizz");
}
else if (!(i % 5))
{
printf("%5s", "Buzz");
}
else
{
if ( i <= 9)
{
printf("%-2d", i);
}
else
{
printf("%-3d", i);
}
}
}
printf("%s", "\n");
return (0);
}
