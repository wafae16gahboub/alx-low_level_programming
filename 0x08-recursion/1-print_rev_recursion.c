#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse
 * @s:string to printed
 * Return: void /wafa
 */
{
	if (*s == '\0')
	return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
