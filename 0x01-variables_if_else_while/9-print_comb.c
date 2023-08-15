#include <stdio.h>

/**
 * main - prints all digits ascendingly
 * Return: 0 in Success
 */
int main(void)
{
	/*prints all digits ussing ascci*/
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
