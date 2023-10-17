#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: String
 * Return: unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int r = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		result = (result << 1) | (*b - '0');
		b++;
	}

	return (r);
}
