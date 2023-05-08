#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
/**
 * read_textfile -  function that reads a text file and prints
 * @filename: name of file
 * @letters: letter
 * Return: number of letter
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t reads, writte;
	char *ptr;

	if (filename == NULL)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	ptr = malloc(sizeof(char) * (letters + 1));
	if (ptr == NULL)
		return (0);
	reads = read(f, ptr, letters);
	if (reads == -1)
	{
		free(ptr);
		close(f);
		return (0);
	}
	writte = write(STDOUT_FILENO, ptr, reads);

	if (writte != reads)
	{

		free(ptr);
		close(f);
		return (0);
	}
	free(ptr);
	close(f);
	return (writte);
}
