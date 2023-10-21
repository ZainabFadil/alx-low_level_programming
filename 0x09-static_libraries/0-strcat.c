#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings
 * @dest: string
 * @src: string
 * Return: pointer
 */
char *_strcat(char *dest, char *src)
{
	int i = strlen(dest), j = 0;

	for ( ; src[j] != '\0' ; i++, j++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
