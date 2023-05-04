#include "main.h"
/**
 * get_endianness - function that checks the endianness.
 *
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int var = 1;
	char *ptr = (char *)&var;

	if (*ptr)
		return (1);
	else
		return (0);
}
