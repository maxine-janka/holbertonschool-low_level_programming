#include <stdio.h>

/**
 * main - Entry point
 * Prints lowercase alphabet except for q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
	{
		if (alpha != 'e' && alpha != 'q')
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
