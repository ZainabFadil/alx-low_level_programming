#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _sqrt_recursion - the sqrt of n
 * @n: int param
 * Return: int
 */
int _sqrt_recursion(int n)
{
	double x;

	/*sqrt function */
	x = sqrt(n);
	if ((int) x == (float) x)
		return (x);
	else
		return (-1);
}
