#include "main.h"
/**
 * _strspn - gets length
 * @s: str
 * @accept: str
 * Return: num
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	while (*s)
	{
		int i;

		for (i = 0 ; accept[i] != '\0' ; i++)
		{
			if (accept[i] == *s)
				break;
		}
		if (accept[i] == '\0')
			break;
		len++;
		s++;
	}
	return (len);
}
