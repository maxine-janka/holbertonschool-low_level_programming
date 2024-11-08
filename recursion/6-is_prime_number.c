#include "main.h"

/**
 * check_prime - Test divisors to determine in 'n' is a prime number
 *
 * @n: Number to check if prime
 * @i: Divisors to test if number is prime
 *
 * Return: 1 if 'n' is a prime number.
 *         0 if 'n' is not a prime number.
 */

int check_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (i == n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, i + 1));
	}
}

/**
 * is_prime_number - Check if 'n' is a prime number
 *
 * @n: Number to check if prime
 *
 * Return: 1 if 'n' is a prime number.
 *         0 if 'n' is not a prime number.
 */

int is_prime_number(int n)

{
	return (check_prime(n, 2));
}
