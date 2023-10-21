#include "main.h"
/**
 * _memcpy - copies n bytes from src to dest
 * @dest: string
 * @src: string
 * @n: num
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
