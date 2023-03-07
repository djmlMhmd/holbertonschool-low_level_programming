#include <stdio.h>

/**
 * main - Prints all command line arguments, one per line
 *
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the command line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return (0);
}
