#include "lists.h"
/**
 * add_nodeint_end - a function that adds a new node at the end
 * @head: pointer to the function
 * @n: number integer
 * Return: 0 or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *ptr;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = node;
	}
	return (node);
}
