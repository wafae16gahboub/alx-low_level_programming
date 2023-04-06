#include "main.h"

/**
 * factorial - calculates the factorial of an integer
 * @n: the integer to calculate the factorial
 *
 * Return: the factorial of n, or -1 on error
 */
int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0)
	{
	return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}
