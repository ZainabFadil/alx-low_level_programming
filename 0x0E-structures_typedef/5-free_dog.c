#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog -  frees structs.
 * @d: param
 * Return: void
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
		{
			free(d->name);
		}
		if (d->owner)
		{
			free(d->owner);
		}
		free(d);
	}

}
