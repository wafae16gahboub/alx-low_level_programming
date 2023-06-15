#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list
 * @head: Pointer to the head of the list
 * @n: Value of the element
 * Return: The address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current_head;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	current_head = *head;

	if (current_head != NULL)
	{
		while (current_head->next != NULL)
			current_head = current_head->next;
		current_head->next = new_node;
	}
	else
	{
		*head = new_node;
	}

	new_node->prev = current_head;

	return (new_node);
}

