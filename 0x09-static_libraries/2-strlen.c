#include <stdio.h>
#include "main.h"
/**
 * _strlen - returns the length
 * @s: string
 * Return: int
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
