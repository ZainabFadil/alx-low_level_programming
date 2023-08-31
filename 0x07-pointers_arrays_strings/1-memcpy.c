#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: param
 * @src: param
 * @n: param
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int idx;

	for (idx = 0; idx < n; idx++)
	{
		dest[idx] = src[idx];
	}

	return (dest);
}
