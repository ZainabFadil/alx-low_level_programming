#include <stdio.h>

/**
 * main - prints all the nubers in base 16
 * Return: 0 in Success
 */
int main(void)
{
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
