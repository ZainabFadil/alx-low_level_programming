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

	if (len == 0)
		putchar('\n');
	else if (len % 2 == 0)
		n = (len / 2);
	else
		n = (len - 1) / 2;

	for (i = n; i < len; ++i)
		putchar(str[i]);
	puts("\n");
}
