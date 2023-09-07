#include <stdio.h>
#include "main.h"

/**
 * main - prints program name
 * @argc: param
 * @argv: param
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
