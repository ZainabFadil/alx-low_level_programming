#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * append_text_to_file - append given text to a file
 * @filename: the path of the file
 * @text_content: the content that will be appended to the file
 * Return: 1 (in Success)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opn, wt, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	opn = open(filename, O_WRONLY | O_APPEND);
	wt = write(opn, text_content, i);

	if (opn == -1 || wt == -1)
		return (-1);

	close(opn);

	return (1);
}
