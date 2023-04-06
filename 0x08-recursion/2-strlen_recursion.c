#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: the lenght
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
