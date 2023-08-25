#include <stdio.h>
#include "main.h"

/**
*print_array - prints the elements of the array
*@a: array
*@n: size of the array
*Return: void
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		printf("array[%d] = %d;\n", i, *(a + i));
	}
}
