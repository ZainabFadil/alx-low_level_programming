#include "main.h"

/**
 * *_memset - memset func
 * @s: adress param
 * @b: char param
 * @n: int param
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}
