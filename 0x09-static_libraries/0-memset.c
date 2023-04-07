#include "main.h"
/**
 * _memset - Fills memory with a constant byte.
 *
 * @s: Pointer to the memory area to be filled.
 * @b: The value to be set.
 * @n: The number of bytes to be set to the value.
 *
 * Return: Pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
{
	*p++ = b;
}
	return (s);
}
