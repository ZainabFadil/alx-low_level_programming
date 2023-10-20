#include "main.h"

/**
 * print_diagonal - prints diagonal shape
 * @n: param
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	for (i = 1 ; i <= n ; i++)
	{
		int space = i - 1;

		while (space--)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
