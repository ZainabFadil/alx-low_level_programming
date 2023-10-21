#include "main.h"
#include <string.h>
/**
 * _strstr - locates substr
 * @haystack: str
 * @needle: str
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, n = strlen(haystack) - strlen(needle);

	for (i = 0 ; i <= n ; i++)
	{
		for (j = 0 ; needle[j] != '\0' ; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (NULL);
}
