#include "main.h"

void jack_bauer(void)
{
    int minutes = 0;
    int minutes_end = 60;
    int min_first_digit;
    int min_second_digit;
 
    int hours = 0;
    int hours_end = 24;
    int hour_first_digit;
    int hour_second_digit;


    while (hours < hours_end) {
        hour_second_digit = hours % 10;
        hour_first_digit = (hours - hour_second_digit) / 10;

        minutes = 0;
        while (minutes < minutes_end) {
            _putchar(48 + hour_first_digit);
            _putchar(48 + hour_second_digit);
            _putchar(':');

            min_second_digit = minutes % 10;
            min_first_digit = (minutes - min_second_digit) / 10;

            // Using 53 as an example
            // 53 % 10 = 3
            // (53 - 3) / 10 = 5

            _putchar(48 + min_first_digit);
            _putchar(48 + min_second_digit);
            _putchar('\n');

            minutes = minutes + 1;
        }

        hours = hours + 1;
    }
}
