#include "lists.h"
/**
 * print_listint_safe - 
 * @head: pointer function
 * Retuen: pointer
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *ptr = NULL, *next;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = ptr;
		ptr = *head;
		*head = next;
	}
	return (ptr);
}
