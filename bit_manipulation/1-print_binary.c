#include "main.h"
#include <stdio.h>
/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	unsigned int i;

	mask <<= (sizeof(unsigned long int) * 8) - 1;

	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		if ((n & mask) == 0)
			putchar('0');
		else
			putchar('1');

		mask >>= 1;
	}
}
