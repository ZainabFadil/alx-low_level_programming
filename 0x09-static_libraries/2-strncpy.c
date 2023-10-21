#include "main.h"
#include <string.h>
/**
 * _strncpy - copies a string.
 * @dest: string
 * @src: string
 * @n: num
 * Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; src[i] != '\0' && dest[i] != '\0' && i < n ; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
