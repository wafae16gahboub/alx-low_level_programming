#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly
 * @str: string to duplicate
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *ptr;
	int a;
	int b;

	if (str == NULL)
	{
	return (0);
	}
	for (a = 0; str[a] != '\0'; a++)
	{
	}
	ptr = malloc((a + 1) * sizeof(char));
	for (b = 0; b <= a; b++)
	{
	ptr[b] = str[b];
	}
	return (ptr);
}
