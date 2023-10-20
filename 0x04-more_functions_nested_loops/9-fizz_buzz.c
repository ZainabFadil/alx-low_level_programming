#include "main.h"
#include <stdio.h>

/**
 * fizzbuzz - fizzbuzz game
 */
void fizzbuzz(void)
{
	int i = 1;

	for (; i <= 100; ++i)
	{
		if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	fizzbuzz();
	return (0);
}
