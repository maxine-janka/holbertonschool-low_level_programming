#include "main.h"

/**
 * _islower - Checks for lowercase character
 *
 *@c: ascii character to compare
 *
 * Return: 1 if c is lowercase, 0 if not
 */

int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else
		return (0);

}
