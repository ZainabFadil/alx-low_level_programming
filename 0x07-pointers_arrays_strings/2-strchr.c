#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates firsst occurance of a char
 * @s: string param
 * @c: char
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
		int num;

		while (1)
		{
			num = *s++;
			if (num == c)
			{
				return (s - 1);
			}
			if (num == 0)
			{
				return (NULL);
			}
		}
}
