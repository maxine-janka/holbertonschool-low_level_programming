#include "main.h"

/**
 * jack_bauer - Prints every minute of the day, starting from 00:00 to 23:59
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int hours = 0;
	int hours_end = 24;
	int minutes = 0;
	int minutes_end = 60;

    while (hours < hours_end) 
    {
        minutes = 0;

        while(minutes < minutes_end) 
	{
            if ((hours >= 0) && (hours <= 9)) 
	    {
                _putchar('0');
	    }
            _putchar('0' + hours);
	
	    _putchar(':');

            if ((minutes >= 0) && (minutes <= 9)) 
	    {
                _putchar('0' + minutes); 
	    }
	    _putchar('0');
	 
            _putchar('\n');

            minutes = minutes + 1;
        }

        // at this point, minutes == 60

        hours = hours + 1;
    }
}
