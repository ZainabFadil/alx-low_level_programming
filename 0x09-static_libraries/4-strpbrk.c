#include "main.h"
/**
 * _strpbrk - locates 1st  occu.
 * @s: str
 * @accept: str
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{

	while (*s)
	{
		int i;

		for (i = 0 ; accept[i] != '\0' ; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}
	return (NULL);
}
