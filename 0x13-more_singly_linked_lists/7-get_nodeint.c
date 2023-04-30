#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth node
 * @head: pointer the linked list
 * @index: index
 * Return: 0 or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	unsigned int n = 0;

	while (ptr && n < index)
	{
		ptr = ptr->next;
		n++;
	}
	if (n == index && ptr)
	{
		return (ptr);
	}
	else
	{
		return (NULL);
	}
}
