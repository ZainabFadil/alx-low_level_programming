#include "main.h"
#include <string.h>
/**
 * string_nconcat - concatenates strings.
 * @s1: string
 * @s2: string
 * @n: param
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int sz1, sz2, i;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	sz1 = strlen(s1), sz2 = strlen(s2);
	if (n > sz2)
	{
		n = sz2;
	}
	ptr = malloc(sz1 + n + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < sz1 ; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0 ; i < n ; i++)
	{
		ptr[sz1 + i] = s2[i];
	}
	ptr[sz1 + i] = '\0';
	return (ptr);
}
