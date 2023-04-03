#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search
 * @accept: the characters to search for
 *
 * Return: the number of bytes in the initial segment of s which consist only
 * of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int a, b;

	for (a = 0; s[a]; a++)
	{
	for (b = 0; accept[b]; b++)
	{
	if (s[a] == accept[b])
	{
		n++;
		break;
	}
	}
	if (!accept[b])
	{
		break;
	}
	}

	return (n);
}
