#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - function that converts a binary number to an int
 * @b: pointer
 * Return: o or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;
	int lp = 0;
	int n;

	if (b == NULL)
		return (0);
	while (b[lp])
	{
		if (b[lp] != '0' && b[lp] != '1')
		return (0);
	lp++;
	}
	for (n = 0; n < lp; n++)
	{
		a += ((b[lp - 1 - n] - '0') << n);
	}
	return (a);
}
