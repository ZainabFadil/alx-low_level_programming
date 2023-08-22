#include <stdio.h>
#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * Return: void
 * @a: pointer to an integer
 * @b: pointer to an integer
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
