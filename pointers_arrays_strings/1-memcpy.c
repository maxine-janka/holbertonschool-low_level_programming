#include "main.h"

/**
 * _memcpy - A function that copies 'n' bytes from memory block 'src'
 *            to the memory block 'dest'
 *
 *@n: Number of bytes to copy
 *@src: A pointer to memory bock to copy 'n' bytes
 *@dest: A pointer that receives 'n' copied bytes from 'src'
 *
 * Return: The pointer to dest with copied memory block
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index = 0;

	while (index < n)
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}

