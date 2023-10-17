#include "main.h"

/**
 * get_endianness - checks the endianness.
 * Return: int
 */
int get_endianness(void)
{
	int n = 1;

	if (*(char *)&n)
		return (1);
	return (0);
}
