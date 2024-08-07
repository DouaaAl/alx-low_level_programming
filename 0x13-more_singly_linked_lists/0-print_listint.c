#include <string.h>
#include "lists.h"
#include <stdio.h>

/**
 * print_listint - main function
 * @h: function parameter
 * Return: returns a size_t
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
