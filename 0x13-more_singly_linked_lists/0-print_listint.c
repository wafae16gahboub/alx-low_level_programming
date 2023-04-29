#include "lists.h"
/**
 * print_listint - a function that prints all the elements
 * @h: pointer to function
 * Return: the pointer
 */
size_t print_listint(const listint_t *h)
{
	size_t ctr = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		ctr++;
	}
	return (ctr);
}
