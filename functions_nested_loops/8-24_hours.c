#include "main.h"

/**
 * jack_bauer - Prints every minute of the day, starting from 00:00 to 23:59
 *
 * Return: nothing
 */

void jack_bauer(void)
{
	int minutes = 0;
	int minutes_end = 60;
	int minutes_first_digit;
	int minutes_second_digit;
	int hours = 0;
	int hours_end = 24;
	int hours_first_digit;
	int hours_second_digit;

		while (hours < hours_end)
		{
			hours_first_digit = (hours - hours_second_digit) / 10;
			hours_second_digit = (hours % 10);

			minutes = 0;

			while (minutes < minutes_end)
			{
				_putchar(48 + hours_first_digit);
				_putchar(48 + hours_second_digit);
				_putchar(':');

				minutes_first_digit = (minutes - minutes_second_digit) / 10;
				minutes_second_digit = (minutes % 10);

				_putchar(48 + minutes_first_digit);
				_putchar(48 + minutes_second_digit);
				_putchar('\n');

				minutes = minutes + 1;
			}

			hours = hours + 1;
		}
}
