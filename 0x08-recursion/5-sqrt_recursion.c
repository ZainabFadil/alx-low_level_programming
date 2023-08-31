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
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}

/**
 * _sqrt - calculate the square root
 * @n: the first param
 * @i: the second param
 * Return: int
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
