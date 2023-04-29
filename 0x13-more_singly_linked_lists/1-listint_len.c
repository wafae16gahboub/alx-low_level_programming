#include "lists.h"
/**
 * listint_len - a function that returns the number of elements
 * @h: pointer to the function
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t ctr = 0;

	while (h != NULL)
	{
		ctr++;
		h = h->next;
	}
	return (ctr);
}
