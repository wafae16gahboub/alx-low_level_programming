#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: unsigned number
 * @index: index of the bit
 * Return: 0 or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}

