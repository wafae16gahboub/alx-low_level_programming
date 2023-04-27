#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - a function that adds a new node at the end
 * @head: pointer
 * @str: string
 * Return: 0
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *ptr = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);
	node->str = strdup(str);
	node->len = len;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = node;
	return (node);
}
