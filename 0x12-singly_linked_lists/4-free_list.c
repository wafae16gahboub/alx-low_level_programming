#include <stdlib.h>
#include "lists.h"
/**
 * free_list -  a function that frees a list
 * @head: pointer
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
