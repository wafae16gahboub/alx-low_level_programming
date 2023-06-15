#include "lists.h"

/**
 * print_dlistint - Prints all elements of a doubly linked list
 * @h: Pointer to the head of the list
 * Return: Number of nodes in the list
 **/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *cur;
	size_t num_nodes = 0;

	cur = h;

	while (cur != NULL)
	{
		printf("%d\n", cur->n);
		cur = cur->next;
		num_nodes++;
	}

	return (num_nodes);
}

