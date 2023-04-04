#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the first element of the matrix
 * @size: size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int add1 = 0, add2 = 0;

for (int i = 0; i < size; i++)
{
add1 += *(a + i * size + i);
add2 +=  *(a + i * size + size - i - 1);
}

_putchar("add of first diagonal: %d\n", add1);
_putchar("add of second diagonal: %d\n", add2);
}
