#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - Prints a name.
 *
 * @name: Name to print.
 * @f: Pointer to a function that takes a string
 *     (How to print the name).
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
	{
		f(name);
	}
}
