#include "lists.h"
/**
 * reverse_listint - function that reverses
 * @head: pointer to pointer
 * Return: o or NULL
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr = NULL, *crt = NULL;

	if (head == NULL || *head == NULL)
		return (*head);

	while ((*head)->next != NULL)
	{
		crt = (*head)->next;
		(*head)->next = ptr;
		ptr = *head;
		*head = crt;
	}
	(*head)->next = ptr;
	return (*head);
}
