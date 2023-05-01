#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: pointer to the function
 * @idx: index
 * @n: number
 * Return: o or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *ptr;
	listint_t *ctr = *head;

	ptr = malloc(sizeof(listint_t));
	if (!ptr || !head)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}
	for (x = 0; ctr && x < idx; x++)
	{
		if (x == idx - 1)
		{
			ptr->next = ctr->next;
			ctr->next = ptr;
			return (ptr);
		}
		else
			ctr = ctr->next;
	}
	return (NULL);
}
