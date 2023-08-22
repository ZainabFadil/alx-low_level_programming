#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts2 - prints the even positions of the string
 * @str: given string
 * Return: void (string)
 */
void puts2(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i < len; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
