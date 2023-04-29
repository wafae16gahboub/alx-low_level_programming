#include "lists.h"
/**
 * free_listint - a function that frees
 * @head: pointer to the function
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
