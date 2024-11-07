#include "main.h"

/**
 * _pow_recursion - Calculates the value of 'x' raisied to the power of 'y'
 *
 * @x: Base integer
 * @y: Exponent integer
 *
 * Return: The value of 'x'raised to the power of 'y'.
 *         Return -1 if y < 0 (Error).
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
