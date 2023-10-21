#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings
 * @dest: string
 * @src: string
 * @n: num
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = strlen(dest), j = 0;

	for ( ; src[j] != '\0' && j < n ; i++, j++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
