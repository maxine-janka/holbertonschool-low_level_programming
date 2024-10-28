#include <stdio.h>

/**
 * fizz_buzz - Prints numbers from 1 to 100, followed by a new line
 * print Fizz for multiples of 3 instead of the the number
 * print Buzz for multiples of 5 instead of the number
 * print FizzBuzz for multiples of 3 and 5 instead of the number
 *
 * Return: nothing
 */

void fizz_buzz(void)
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
}
int main(void)
{
	fizz_buzz();
	return (0);
}
