/**
 * _pow_recursion - calculates x raised to the power of y
 *
 * @x: the base number
 * @y: the exponent
 *
 * Return: x raised to the power of y, or -1 on error
 */

#include "main.h"

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
