#include <stdio.h>

/**
 * main - prints alphabets between a and b capital and small
 * Return: 0 in Success
 */
int main(void)
{
	/*print all chars followed by newline*/
	int y;

	for (y = 'a'; y <= 'z'; y++)
		putchar(y);
	for (y = 'A'; y <= 'Z'; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
