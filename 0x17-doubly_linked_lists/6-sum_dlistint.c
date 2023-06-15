#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data in a doubly linked list
 * @head: Pointer to the head of the list
 * Return: Sum of the linked list
 **/
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;
	dlistint_t *current_node;

	for (current_node = head; current_node != NULL; current_node = current_node->next)
	{
		sum += current_node->n;
	}

	return sum;
}
