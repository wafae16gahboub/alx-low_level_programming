#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_file - function that creates a file.
 * @filename: pointer to the function
 * @text_content: pointer to string
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, men = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (men = 0; text_content[men];)
			men++;
	}
	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, men);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);
	return (1);
}
