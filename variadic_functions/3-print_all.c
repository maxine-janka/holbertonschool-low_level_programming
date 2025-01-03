#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - Prints a char from va_list.
 *
 * @args: A list of arguments from va-list passed to the function.
 *
 * Return: Nothing
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - Prints an integer fom va-list.
 *
 * @args: A list of arguments from va_list passed to the function
 *
 * Return: Nothing
 */

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float from va_list.
 *
 * @args: A list of arguments from va_list passed to the function.
 *
 * Return: Nothing.
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_str - Prints a string from va_list.
 *
 * @args: A list of arguments from va_list passed into the function.
 *
 * Return: Nothing.
 */

void print_str(va_list args)
{
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
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
	char *seperator = "";

	check_form checker[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
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

				printf("%s", seperator);
				checker[j].f(args);
				seperator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");

	va_end(args);
}
