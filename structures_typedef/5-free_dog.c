#include "dog.h"

/**
 * free_dog - frees memory allocated to dog_t
 * @d: pointer to struct dog that will be freed
 */

void free_dog(dog_t *d)

{
	if (d)

	{
		free(d->name);
		free(d->owner);
		free(d);

	}

}
