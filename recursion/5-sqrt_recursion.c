#include "main.h"

/**
 * _find_sqrt - Finds the natural square root
 *
 *@x: The number to find the square root of.
 *@y: The square root of 'x' to be tested.
 *
 * Return: The natural square root of 'x'.
 *         Return -1 is the number does not have a natural square root.
 */

int _find_sqrt (int y, int x)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y > x)
	{
		return (-1);
	}
	else
	{
		return (_find_sqrt(y + 1, x));
	}
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 *
 *@n: Input number
 *
 * Return: The natural square root of 'n'.
 *         Return -1 if 'n' does not have a natural square root. 
 */

int _sqrt_recursion(int n)
{
	int root = 1;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else 
	{
		return (_find_sqrt(root, n));
	}
}
