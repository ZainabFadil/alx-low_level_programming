#include "main.h"

/**
 * flip_bits - returns num of bits need to flip to get from num to another
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
