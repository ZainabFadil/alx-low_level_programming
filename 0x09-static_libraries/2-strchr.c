#include "main.h"
/**
 * _strchr -  locates a ch in a string.
 * @s: string
 * @c: char
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	while (1)
	{
		if (*s == c)
			return (s);
		if (*s == '\0')
			break;
		s++;
	}
	return (NULL);
}
