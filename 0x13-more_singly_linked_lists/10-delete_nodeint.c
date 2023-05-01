#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: pointer to a pointer
 * @index: index of the node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *crt;
	unsigned int n;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
		return (1);
	}
	crt = *head;
	for (n = 0; n < index - 1 && crt != NULL; n++)
		crt = crt->next;

	if (crt == NULL || crt->next == NULL)
		return (-1);
	ptr = crt->next;
	crt->next = ptr->next;
	free(ptr);
	return (1);
}
