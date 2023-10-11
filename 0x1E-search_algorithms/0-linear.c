#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array
 * @array: pointer to the array
 * @size: size of array
 * @value: value of int
 * Return: If value is not found or array is NULL, return -1.
 */
int linear_search(int *array, size_t size, int value)
{
int i;

if (array == NULL)
return (-1);

for (i = 0; i < (int)size; i++)
{
printf("Value checked array[%d] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return (i);
}
}

return (-1);
}

