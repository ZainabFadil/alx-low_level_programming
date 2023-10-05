#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - function that pribts the given text into a file
 * @filename: path of the file
 * @letters: num of letters givn by user
 * Return: int
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int read, write, open;
	char *temp;

	if (filename == NULL)
		return (0);
	temp = malloc(sizeof(char) * letters);

	open = open(filename, O_RDONLY);
	read = read(open, temp, letters);
	write = write(STDOUT_FILENO, temp, read);
	if (open == -1 || read == -1 || write == -1 || write != read)
	{
		free(temp);
		return (0);
	}
}
