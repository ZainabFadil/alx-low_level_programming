#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
* _isupper : checks the alphabet
* @c: parameter
* Return: int
*/
int _isupper(int c)
{
	int r;

	if (c >= (int) 'A' && c >= (int) 'Z')
		r = 0;
	else
		r = 1;
	return (r);
}
