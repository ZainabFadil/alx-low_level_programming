#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_file - creates a file
 * @filename: the file path
 * @text_content: the content that wanted to be copied
 */
int create_file(const char *filename, char *text_content)
{
	int opn, wt, i;

	if (filename == NULL)
		retturn (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}
	opn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wt = write(opn, text_content, len);
	if (opn == -1 || wt == -1)
		return (-1);
	close(opn);
	return (1);
}
