#include "lists.h"
/**
 * pop_listint - a function that deletes the head node
 * @head: pointer to function
 * Return: o or NULL
 */
int pop_listint(listint_t **head)
{
	int use;
	listint_t *ptr;

	if (*head == NULL)
		return (0);
	ptr = *head;
	*head = (*head)->next;

	use = ptr->n;
	free(ptr);
	return (use);
}
