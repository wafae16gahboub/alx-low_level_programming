#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a doubly linked list
 * @head: Pointer to the head of the list
 * @index: The index of the node
 * Return: Nth node of the linked list
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	current_node = head;
	for (i = 0; i < index; i++)
	{
		if (current_node == NULL)
			return (NULL);
		current_node = current_node->next;
	}

	return (current_node);
}
