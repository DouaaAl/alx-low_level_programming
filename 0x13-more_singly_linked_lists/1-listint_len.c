#include "lists.h"
#include <stddef.h>

/**
 * listint_len - main function
 * @h: parameter
 * Return: return length of list
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
