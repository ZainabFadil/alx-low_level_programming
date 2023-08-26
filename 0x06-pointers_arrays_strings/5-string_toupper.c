#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*string_toupper - changes smalls to capital
*@s: string
*Return: string
*/
char *string_toupper(char *s)
{
	int len = strlen(s);
	int i;

	for (i = 0; i < len; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
