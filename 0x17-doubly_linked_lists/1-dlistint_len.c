#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a doubly linked list
 * @h: Pointer to the head of the list
 * Return: Number of elements in the list
 **/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *cur;
	size_t num_nodes = 0;

	cur = h;

	while (cur != NULL)
	{
		cur = cur->next;
		num_nodes++;
	}

	return (num_nodes);
}

