#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - Prints a char.
 *
 * @args: A list of arguments passed to the fucntion.
 *
 * Return: Nothing
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}


/**
 * print_all - Prints any, followed by a new line.
 *
 * @format: A string of specified argument types to print.
 *
 * Return: Nothing.
 */

void print_all(const char * const format, ...)
{
	unsigned int i, j;
	va_list args;

	check_form checker[] = {
		{"c", print_char},
		{NULL, NULL}
	};

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (checker[j].form != NULL)
		{
			if (format[i] == *checker[j].form)
			{
				checker[j].f(args);
			}
			j++;
		}
		i++;
	}
	printf("\n");

	va_end(args);
}
