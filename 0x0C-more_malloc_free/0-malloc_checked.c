#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked -  function that allocates memory
 * @b: number
 * Return: 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b * sizeof(char));
	if (!ptr)
		exit(98);
	return (ptr);
}
