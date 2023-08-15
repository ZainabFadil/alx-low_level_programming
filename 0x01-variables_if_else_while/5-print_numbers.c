#include <stdio.h>

/**
 * main - prints all single digits from 0 to 9
 * Return: 0 in Success
 */
int main(void)
{
	/* print all numbers */
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	printf("\n");
	return (0);
}
