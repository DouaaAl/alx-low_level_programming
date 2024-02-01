#include "lists.h"

/**
 * print_list - our function
 * @h: parameter
 * Return: return number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t d = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		d++;
	}
	return (d);
}
