#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: param
 * @size: param
 * @cmp: param
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array && cmp)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]) != 0)
				return (x);
		}
	}

	return (-1);
}
