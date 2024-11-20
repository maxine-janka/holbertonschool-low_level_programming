#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - Selects the correct arithmetic operation function
 *               as per user input.
 *
 * s: Operator passed as an argument.
 *
 * Return: A pointer to the fucntion that corresponds to the
 *         arithmatic operator passed as an argument.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] =  {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	}; int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (*s == *ops[i].op && s[1] != '\0')
		{
			return (ops[i].f);
		}
		i++;
	}
	printf("Error\n");
	exit(99);
}
