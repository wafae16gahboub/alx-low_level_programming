#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: text
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, r;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);

	if (f == -1)
	return (-1);

	if (text_content != NULL)
	{
		r = write(f, text_content, strlen(text_content));
		if (r == -1)
		{
			close(f);
			return (-1);
		}
	}
	close(f);
	return (1);
}
