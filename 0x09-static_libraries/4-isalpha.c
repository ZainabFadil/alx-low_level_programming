#include "main.h"
/**
 * _isalpha - check if  alphabetic
 * @c: char
 * Return: boolean
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
