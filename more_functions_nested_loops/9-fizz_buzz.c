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
if (!(i % 15))
{
printf("%s ", "FizzBuzz");
}
else if (!(i % 3))
{
printf("%s ", "Fizz");
}
else if (!(i % 5))
{
if (i != 100)
{
printf("%s ", "Buzz");
}
else
{
printf("%s", "Buzz");
}
}
else
{
if (i <= 9)
{
printf("%d ", i);
}
else
{
printf("%d ", i);
}
}
}
printf("%s", "\n");
return (0);
}
