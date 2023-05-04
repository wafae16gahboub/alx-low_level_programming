#include "main.h"
/**
 * flip_bits - function that returns the number of bits
 * @n: number 1
 * @m: number 2
 * Return: o
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int crt = 0;
	unsigned long int bit = n ^ m;

	while (bit != 0)
	{
		if ((bit & 1) == 1)
			crt++;
		bit >>= 1;
	}
	return (crt);
}
