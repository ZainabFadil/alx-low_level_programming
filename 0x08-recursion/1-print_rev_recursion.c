#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - print the string in reverse order
 * @s: param string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
