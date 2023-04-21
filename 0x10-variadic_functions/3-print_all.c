#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format: types in string
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0, 
	char typ;
	char *str;

	va_list args;

	va_start(args, format);
	while (format[i])
	{
		typ = format[i];
		switch (typ)
		{
		case 99:
			printf("%c", (char) va_arg(args, int));
			break;
		case 105:
			printf("%d", va_arg(args, int));
			break;
		case 102:
			printf("%f", (float) va_arg(args, double));
			break;
		case 115:
			str = (char *) va_arg(args, char *);
			if (str == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		}
		if ((typ == 99 || typ == 102 || typ == 105 ||
					typ == 115) && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}

