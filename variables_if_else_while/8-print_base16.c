#include <stdio.h>

/**
 * main - Entry point
 * Prints numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;
	int alpha;

	for (num = '0'; num <= '9'; num++)
	{
	putchar(num);
	}
	for (alpha = 'a' ; alpha <= 'f' ; alpha++)
	{
	putchar(alpha);
	}
	putchar('\n');
	return (0);
}
