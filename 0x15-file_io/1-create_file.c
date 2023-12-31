#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_file - creates a file
 * @filename: the file path
 * @text_content: the content that wanted to be copied
 * Return: integer (1) in Success
 */
int create_file(const char *filename, char *text_content)
{
	int opn, wt, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}
	opn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wt = write(opn, text_content, i);
	if (opn == -1 || wt == -1)
		return (-1);
	close(opn);
	return (1);
}
