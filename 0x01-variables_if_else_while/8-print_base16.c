#include <stdio.h>

/**
 * main - prints phrase and the starting point
 * Return: 0 in Success
 */
int main(void)
{
	/* base 16 */
	int num;
	char c;
	
	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
