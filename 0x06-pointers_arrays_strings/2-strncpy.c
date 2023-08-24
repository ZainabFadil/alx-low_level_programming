#include <stdio.h>
#include <string.h>
#include "main.h"

/**
*_strncpy - connects 2 strings
*@dest: destination
*@src: source
*@n: maximum bytes added to destination
*Return: string
*/
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
