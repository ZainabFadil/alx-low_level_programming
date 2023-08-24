#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - print the second half of the string
 * @str: given argument
 * Return: void
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int n, i;

	if (len % 2 == 0)
		n = (len / 2) - 1;
	else
		n = (len - 1) / 2;

	for (i = n; i <= len - 1; ++i)
		putchar(str[i]);
	puts("\n");
}