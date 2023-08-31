#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - checks wheather the num is prime or not
 * @n: int param
 * Return: int
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prim(n, n - 1));
}

/**
 * prim - checks if n is prim or not
 * @n: param
 * @i: param
 * Return: int
 */
int prim(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prim(n, i - 1));
}
