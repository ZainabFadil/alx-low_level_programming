#include <stdio.h>
#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 * @dest: str
 * @src: str
 * Return: str
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	dest[i] = src[i];
	return (dest);
}
