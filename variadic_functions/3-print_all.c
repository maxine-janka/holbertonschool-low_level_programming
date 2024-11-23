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
	unsigned int i;
	va_list args;

	format_t formats[] = {
		{"c", print_char},
		{NULL, NULL}
	};

	va_start(args, format);

	while (formats[i].format != NULL)
	{
		if (*format == *formats[i].format && format[1] == '\0')
		{
			formats[i].f;
		}
		i++;
	}
	printf("\n");

	va_end(args);
}
