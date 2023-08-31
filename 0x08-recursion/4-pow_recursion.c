#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - calculate the power
 * @x: param
 * @y: param
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
