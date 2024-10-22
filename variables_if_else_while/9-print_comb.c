#include <stdio.h>

/**
 * main - Entry point
 * Prints single digits separated by commas and spaces
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = '0' ; num <= '9' ; num++)
	{
		putchar(num);
		if (num != '9')
		{
		putchar('," "');
		}
	}
	putchar('\n');
	return (0);

}
