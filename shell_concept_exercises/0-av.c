#include <stdio.h>
#include <unistd.h>

/**
 * print_av - Prints all arguments without using argc.
 *
 * @av: The strings/arguments to be printed.
 *
 * Return: 0 (success).
 */

int print_av(char **av)
{
	int i = 0;

	while (av[i] != NULL)
	{
		printf("av[%d] = %s\n", i, av[i]);
		i++;
	}
	return (0);
}

/**
 * main - Entry point.
 *
 * @ac: Number of arguments (unused).
 * @av: The strings/arguments to print.
 *
 * Return: Result of print_av function.
 */ 

int main (__attribute__((unused))int ac, char **av)
{
	return (print_av(av));
}
