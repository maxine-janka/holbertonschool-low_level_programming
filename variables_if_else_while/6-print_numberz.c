#include <stdio.h>

/**
 * main - Entry point
 * Prints integers `from  0-9 using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = '0' ; n <= '9' ; n++)
	{
	putchar(n);
	}
	putchar('\n');
	return (0);
}
