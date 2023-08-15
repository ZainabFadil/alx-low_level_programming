#include <stdio.h>

/**
 * main - prints chars in reversed order
 * Return: 0 in Success
 */
int main(void)
{
	/* all chars are reversed */
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
