#include "main.h"
#include <stdio.h>

/**
*_isalpha - check whether alphabet or not
*@c: is parameter
*Return: void
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
