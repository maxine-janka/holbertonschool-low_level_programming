#include <stdio.h>

/**
 * main - Prints numbers from 1 to 100, followed by a new line
 *        Print Fizz for multiples of 3 instead of the the number
 *        Print Buzz for multiples of 5 instead of the number
 *        Print FizzBuzz for multiples of 3 and 5 instead of the number
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3) == 0 && (n % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((n % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((n % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{
		printf("%d ", n);
		}
	}
	printf("\n");

	return (0);
}
