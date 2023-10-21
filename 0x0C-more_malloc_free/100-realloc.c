#include "main.h"
/**
 * _realloc - reallocates a memory
 * @ptr: param
 * @old_size: param
 * @new_size: param
 * Return: pointer
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	newptr = malloc(new_size);
	if (newptr == NULL)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (newptr);
	}
	for (i = 0 ; i < old_size && i < new_size; i++)
	{
		*((char *)newptr + i) = *((char *)ptr + i);
	}
	free(ptr);
	return (newptr);
}
