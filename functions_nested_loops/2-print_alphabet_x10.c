#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase ten times
 *
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)

{
	char alpha;
	int line;

	for (line = '0' ; line < 10 ; line++)
	{
		for (alpha = 'a' ; alpha <= 'z' ; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
