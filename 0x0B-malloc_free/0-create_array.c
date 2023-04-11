#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - function that creates an array of chars
 *@size: size of array
 *@c: fille
 *Return: 0 or 1
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *ptr = malloc(size * sizeof(char));

	if (size == 0 || ptr == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < size; i++)
	{
	*(ptr + i) = c;
	}

	return (ptr);
}
