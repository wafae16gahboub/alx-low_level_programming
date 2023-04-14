#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: min number
 * @max: max of number
 * Return: NULL if fails
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int size;

	size = max - min + 1;

	if (min > max)
		return (NULL);
	ptr = malloc((size) * sizeof(int *));
	if (!ptr)
		return (NULL);
	for (i = 0; i <= size; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
