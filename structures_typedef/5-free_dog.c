#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Free's dogs.
 *
 *@d: Dog to be freed.
 *
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
