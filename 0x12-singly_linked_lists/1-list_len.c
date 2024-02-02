#include "lists.h"

/**
 * list_len - our functions
 * @h: parameter
 * Return: returns a list of nodes
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
