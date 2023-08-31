#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - checks wheather the num is prime or not
 * @n: int param
 * Return: int
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);

	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
