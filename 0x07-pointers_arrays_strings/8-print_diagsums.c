#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the first element of the matrix
 * @size: size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int add1, add2, y;

	add1 = 0;
	add2 = 0;

	for (y = 0; y < size; y++)
	{
	add1 = add1 + a[y * size + y];
	}

	for (y = size - 1; y >= 0; y--)
	{
	add2 += a[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", add1, add2);
}
