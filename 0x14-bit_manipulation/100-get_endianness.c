#include "main.h"

/**
 * get_endianness - checks the endianness.
 */
int get_endianness(void)
{
	int num = 1;

	if (*(char *)&num)
		return (1);
}
