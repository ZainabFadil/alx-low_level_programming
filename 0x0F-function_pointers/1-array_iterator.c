#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as a parameter
 * @array: param
 * @size: paaram
 * @action: paraam
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	/*Recurrence */
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
