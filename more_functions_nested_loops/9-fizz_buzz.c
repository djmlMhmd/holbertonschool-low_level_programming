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
printf("%s ", "Fizz");
}
else if (!(i % 5))
{
printf("%s ", "Buzz");
}
else
{
printf("%d ", i);
}
}
printf("%s", "\n");
return (0);
}
