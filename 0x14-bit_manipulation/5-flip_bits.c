#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from one number to another.
 * @n: param
 * @m: param
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m;
	unsigned long int flips = 0;

	while (num)
	{
		flips += num & 1;
		num = num >> 1;
	}
	return (flips);
}
