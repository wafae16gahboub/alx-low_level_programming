#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - a function that prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list prt;

	va_start(prt, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(prt, int));
		if (!separator)
		{
		}
		else
		if (i < n - 1)
		{
		printf("%s", separator);
		}
	}
	va_end(prt);
	printf("\n");
}
