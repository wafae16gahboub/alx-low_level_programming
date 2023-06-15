#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list
 * @head: Pointer to the head of the list
 * @n: Value 
 * Return: The address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *cur_head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	cur_head = *head;

	if (cur_head != NULL)
	{
		while (cur_head->prev != NULL)
			cur_head = cur_head->prev;
	}

	new_node->next = cur_head;

	if (cur_head != NULL)
		cur_head->prev = new_node;

	*head = new_node;

	return (new_node);
}

