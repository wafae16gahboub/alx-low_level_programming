#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: text
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int frr, ree, men;

	if (filename == NULL)
		return (-1);

	frr = open(filename, O_WRONLY | O_APPEND);
	if (frr == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (men = 0; text_content[men]; men++)
		ree = write(frr, text_content, men);

		if (ree == -1)
		{
			close(frr);
			return (-1);
		}
	}
	close(frr);
	return (1);
}
