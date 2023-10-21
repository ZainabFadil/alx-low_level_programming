#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: param
 * @max: param
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *ptr, i, sz;

	if (min > max)
	{
		return (NULL);
	}
	sz = (max - min + 1);
	ptr = malloc(sizeof(int) * sz);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < sz; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
