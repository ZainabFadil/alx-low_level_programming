#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverse the given string
 * @s: given string the parameter of the function
 * Return: void (string)
 */
void rev_string(char *s)
{
	int len = strlen(s);
	char temp;
	int i, j;

	for (i = 0, j = len - 1; i < j; ++i, --j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
