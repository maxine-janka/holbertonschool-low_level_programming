#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers followed by a new line.
 *
 * @separator: A string to be printed between numbers.
 * @n: The number of integers passed in.
 * @...: variable number of integers to print.
 *
 * Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);

	i = 0;
	while (i < n)
	{
		if (i > 0 && separator != NULL)
		{
			printf("%s", separator);
		}
		printf("%d", va_arg(nums, int));
		i++;
	}
	va_end(nums);
	printf("\n");

}
