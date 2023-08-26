#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*leet - encodes a string into 1337
*@s: string
*Return: string
*/
char *leet(char *s)
{
	int len = strlen(s);
	int i, j;
	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; i < len; ++i)
	{
		for (j = 0; j < 10; ++j)
		{
			if (s[i] == a[j])
				s[i] = b[j];
		}
	}
	return (s);
}
