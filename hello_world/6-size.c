#include <stdio.h>

/**
 * main - Entry point
 * sizeof - Size of four types in bytes
 *
 * Return: Always 0 (Success)
 */

int main(void)
{	
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of a int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return(0);
}	
