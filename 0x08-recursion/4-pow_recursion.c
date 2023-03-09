#include "main.h"

/**
 * _pow_recursion - returns the value of x
 * raised to the power of y
 * @x: input number
 * @y: input number
 * Return: the value of x raised to pwer y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

