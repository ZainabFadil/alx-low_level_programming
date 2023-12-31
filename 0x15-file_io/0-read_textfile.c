#include "main.h"
#include <stdlib.h>
#include <unistd.h>
/**
 * read_textfile - function that pribts the given text into a file
 * @filename: path of the file
 * @letters: num of letters givn by user
 * Return: int
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, wt, opn;
	char *temp;

	if (filename == NULL)
		return (0);
	temp = malloc(sizeof(char) * letters);

	opn = open(filename, O_RDONLY);
	rd = read(opn, temp, letters);
	wt = write(STDOUT_FILENO, temp, rd);
	if (opn == -1 || rd == -1 || wt == -1 || wt != rd)
	{
		free(temp);
		return (0);
	}
	free(temp);
	close(opn);

	return (wt);
}
