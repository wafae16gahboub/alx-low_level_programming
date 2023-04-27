#include <stdlib.h>
#include "lists.h"
/**
 * list_len -  function that returns the number of elements in a linked
 * @h: pointer
 * Return: 0
 */
size_t list_len(const list_t *h)
{
	size_t p = 0;

	while (!h)
	{
		p++;
		h = h->next;
	}
	return (p);
}
