#include "main.h"

/**
*print_alphabet_x10 - print 10 times
*Return: Void
*/
void print_alphabet_x10(void)
{
	int num = 10;
	char i;

	while (num--)
	{
		for (i = 'a'; i <= 'z'; ++i)
			_putchar(i);
		_putchar('\n');
	}
}
