#include "dog.h"
#include <stdlib.h>

/**
 * _strcpy - Copies the string pointed to by src
 *           to the buffer pointed to by dest
 *
 * @dest: Pointer to array where string is to be copied
 * @src: The string to be copied
 *
 * Return: The pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index = index + 1;

		dest[index] = '\0';
	}
	return (dest);
}

/**
 * new_dog - Creates a new struct dog.
 *
 *@name: The name of the dog.
 *@age: The age of the dog.
 *@owner: The owner of the dog.
 *
 * Return: A pointer to the new dog struct.
 *         Return NULL if function fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *alt_dog;

	alt_dog = malloc(sizeof(dog_t));
	if (alt_dog == NULL)
	{
		return (NULL);

	}

	alt_dog->name = malloc(sizeof(name) + 1);
	if (alt_dog->name == NULL)
	{
		free(alt_dog);
		return (NULL);
	}

	alt_dog->owner = malloc(sizeof(owner) + 1);
	if (alt_dog->owner == NULL)
	{
		free(alt_dog->name);
		free(alt_dog);
		return (NULL);
	}

	_strcpy(alt_dog->name, name);
	_strcpy(alt_dog->owner, owner);
	alt_dog->age = age;

	return (alt_dog);

}
