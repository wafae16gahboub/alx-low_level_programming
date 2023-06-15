#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n)
 * of a doubly linked list
 * @head: Pointer to the head of the list
 * Return: Sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int total_sum = 0;
	dlistint_t *current;

	if (head != NULL)
	{
		current = head;

		while (current != NULL)
		{
			total_sum += current->n;
			current = current->next;
		}
	}

	return (total_sum);
}
