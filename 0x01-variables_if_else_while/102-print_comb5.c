#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: 0 in Success situation else 1 will be returned
 */
int main (void)
{
	int i, j;

	/*modulud will be used here */
	for (i = 0; i <= 99; i++)
	{
		for (j = i; j <= 99; j++)
		{
			if (j != i)
			{
				putchar(i / 10 + 48);
				putchar(i % 10 + 48);
				putchar(' ');
				putchar(j / 10 + 48);
				putchar(j % 10 + 48);

				if (i * 100 + j != 9899)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
