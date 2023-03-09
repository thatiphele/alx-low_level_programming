#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @y: The power that I must raise to.
 * @x: The nth number to be raised.
 * Return: The value of x raised to the power of y.
 */

int _pow_recursion(int x, int y)
{
	int output = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	output *= _pow_recursion(x, y - 1);

	return (output);
}
