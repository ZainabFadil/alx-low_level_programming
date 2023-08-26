#include "main.h"
#include <stdio.h>

/**
*reverse_array - reverses array
*@a: array of elements
*@n: size of the array
*Return: void
*/
void reverse_array(int *a, int n)
{
	int i, j;
	int temp;

	for (i = 0, j = n - 1; i < n / 2; ++i, --j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
