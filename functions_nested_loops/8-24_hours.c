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

		while (hours < hours_end) //hours or rows
		{
			hours_first_digit = (hours - hours_second_digit) / 10; //calculate hours
			hours_second_digit = (hours % 10);
			
			minutes = 0; //reset the minutes for each hour

			while (minutes < minutes_end) //for every hour or row  I want 59 minutes (columns)
			{
				_putchar(48 + hours_first_digit); //print hours first
                        	_putchar(48 + hours_second_digit);
                        	_putchar(':');

				minutes_first_digit = (minutes - minutes_second_digit) / 10; //calculate minutes
				minutes_second_digit = (minutes % 10);
				
				_putchar(48 + minutes_first_digit); //print minutes
				_putchar(48 + minutes_second_digit);
				_putchar('\n');

				minutes = minutes + 1; //add a minute each time up to 59 then go back to hours
			}	
		
			hours = hours + 1; //add an hour each time after every 59 minutes
		}
}
