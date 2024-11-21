#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings followed by a new line.
 *
 * @separator: A string to be printed between strings.
 * @n: The number of strings passed in.
 * @...: variable number of strings to print.
 *
 * Return: Nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *current;

	va_start(strings, n);

	i = 0;
	while (i < n)
	{
		current = va_arg(strings, char*);

		if (i > 0 && separator != NULL)
		{
			printf("%s", separator);
		}
		if (current == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", current);
		}
		i++;
	}
	va_end(strings);
	printf("\n");
}
