#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct check_format - Structure to print the correct format.
 *
 * @form: The format to print.
 * @f: The fucntion to print the specified form.
 */

struct check_format
{
	char *form;
	void (*f)();
};

typedef struct check_format check_form;

void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_str(va_list args);
#endif
