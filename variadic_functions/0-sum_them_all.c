#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 *
 * @n: The number of parameters passed in.
 * @...: The variable number of parameters.
 *
 * Return: The sum of all parameters.
 *         If n = 0, return 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum;
	unsigned int i;

	va_start(args, n);

	i = 0, sum = 0;
	while (i < n)
	{
		sum = sum + va_arg(args, int);
		i++;
	}

	va_end(args);

	return (sum);
}

