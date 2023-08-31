#include "main.h"

/**
 * print_chessboard - print chessboard
 * @a: pointer
 */
void print_chessboard(char (*a)[8])
{
	int l, m;

	for (l = 0; l < 8; l++)
	{
		for (m = 0; m < 8; m++)
		{
			_putchar(a[l][m]);
		}
		_putchar('\n');
	}
}
