#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Adds two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts one integer from another.
 *
 * @a: Integer to subtract from.
 * @b: Integer to substract a.
 *
 * Return: The difference of a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers and returns the product.
 *
 * @a: First integer to multiply.
 * @b: Second integer to multiply.
 *
 * Return: The product of a and  b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - Divides two integers and returns the result.
 *
 * @a: Integer to divide.
 * @b: Integeger divisor.
 *
 * Return: The result of the division of a by b.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Divide two integers and return the remainder.
 *
 * @a: Integer to divide.
 * @b: Integer divisor.
 *
 * Return: The remainder of the division of a by b.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
