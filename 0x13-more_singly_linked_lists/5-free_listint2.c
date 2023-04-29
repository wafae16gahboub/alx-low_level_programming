#include "lists.h"
/**
 * free_listint2 - a function that frees
 * @head: pointer to the head
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
	*head = NULL;
}
