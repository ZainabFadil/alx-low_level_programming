#include <stdio.h>
#include <string.h>
#include "main.h>

/**
 *_strcat - connects 2 strings
 *@dest: destination
 *@src: source
 *Return: string
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
