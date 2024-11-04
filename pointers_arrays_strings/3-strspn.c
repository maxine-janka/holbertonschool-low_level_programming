#include "main.h"

/**
 * _strspn - Get the length of a prefic substring
 *
 * @s: String to be scanned
 * @accept: String containing list of characaters to match in 's'
 *
 * Return: The number of bytes iin the initial segemnt of 's'
 *         consisting only of bytes from 'accept'
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int byte_count;
	int j, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				byte_count++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			return (byte_count);
		}
	}
	return (byte_count);
}
