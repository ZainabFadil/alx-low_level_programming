#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints sum of diagonals
 * @a: 2d array
 * @size: int param
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;

	unsigned int s, sum;

	s = 0;
	sum = 0;

	for (i = 0; i < size; i++)
	{
		s += a[(size * i) + i];
		sum += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", s, sum);
}
