#include "main.h"
#include <stdio.h>

/**
*print_to_98 - prints natural numbers
*@n: parameter
*Return: void
*/
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; ++i)
	{
		if (i == 98)
		{
			puts("98");
			return;
		}
		printf("%d, ", i);
	}
}
