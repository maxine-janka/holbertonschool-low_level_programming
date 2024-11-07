#include "main.h"

/**
 * factorial - Returns the factorial of a given integer
 *
 * @n: Input integer
 *
 * Return: Factorial of given integer.
 *         Return -1 for n  < 0 (Error).
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
