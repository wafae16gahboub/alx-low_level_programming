#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of argument
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
	unsigned int i;
	int add = 0;
	va_list par;

	va_start(par, n);

	for (i = 0; i < n; i++)
		add += va_arg(par, int);
	va_end(par);
	return (add);
	}
}
