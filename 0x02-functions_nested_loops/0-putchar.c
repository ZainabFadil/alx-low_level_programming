#include <stdio.h>
#include "main.h"

/**
 * main - prints putchar
 * Return: 0
 */
int main(void)
{
	int i;
	char a[] = "_putchar";

	for (i = 0; i < 8; ++i)
	{
		_putchar(a[i]);
	}
	putchar('\n');

	return (0);
}
