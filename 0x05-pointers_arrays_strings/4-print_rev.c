#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - reverse the given string
 * @s: given string
 * Return: void (string)
 */
void print_rev(char *s)
{
	int i;
	int len = strlen(s);

	for (i = len - 1; i >= 0; --i)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
