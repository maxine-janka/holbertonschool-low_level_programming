#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 *
 * @int: value of integer
 *
 * Return: Always 0 (Success)
 */

int _abs(int i)
{
	if (i > 0)
	{
		return(i);
	}
	else
	{
		return(-(i));
	}
}
