#include <stdio.h>
#include <string.h>
#include "main.h"

/**
*_strncat - connects 2 strings
*@dest: destination
*@src: source
*@n: maximum bytes added to destination
*Return: string
*/
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
