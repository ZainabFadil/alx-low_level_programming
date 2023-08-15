#include <stdio.h>

/**
 * main - prints all characters from a to b in lower case
 * Return: 0 in Success
 */
int main(void)
{
	/*all chars should be small*/
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
