#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
*_islower - checks weather lower or capital
*@c: character int parameter
*Return: (1) Success, else fail
*/
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
