#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 *
 *@c: ascii character to compare
 *
 * Return: 1 if c is upper or lowercase letter, 0 if not
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);

}
