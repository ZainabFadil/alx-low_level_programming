#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - checks weather the num is palindrom or not
 * @s: is a given string and can be used in the following param
 * Return: int in Success case
 */
int is_palindrome(char *s)
{
	if (s == NULL)
		return (1);
	return (palind(s, 1, 0, strlen(s) - 1));
}

/**
 * palind - checks palindromic case
 * @s: string
 * @i: index
 * @st: start
 * @l: last
 * Return: int
 */
int palind(char *s, int i, int st, int l)
{
	/* base casse */
	if (i == (int) strlen(s) / 2)
	{
		/*the length is odd */
		if (strlen(s) % 2 & 1)
		{
			return (1);
		}
		/*the length is even */
		if (s[strlen(s) / 2] == s[(strlen(s) / 2) - 1])
			return (1);
		return (0);
	}
	if (s[l] != s[st])
		return (0);
	return (palind(s, i + 1, st + 1, l - 1));
}
