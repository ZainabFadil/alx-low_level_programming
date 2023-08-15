#include <stdio.h>

/**
 * main - print all chars expect q and e
 * Return: 0 in Success
 */
int main(void)
{
	/* skip e and q */
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
