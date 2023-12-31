#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - prints the string length
 * @s: length of the string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
