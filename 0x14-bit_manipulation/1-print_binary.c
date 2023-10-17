#include "main.h"

/**
 * print_binary - prints binary representation of the number
 * @n: param
 * Return: Void
 */
void print_binary(unsigned long int n)
{
	unsigned long int h = n;
	int m = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while ((h >>= 1) > 0)
		m++;

	while (m >= 0)
	{
		((n >> m) & 1) ? _putchar('1') : _putchar('0');
		m--;
	}
}
