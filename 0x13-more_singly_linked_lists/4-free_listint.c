#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function
 * @head: function param
 * Return: doesn't return nothing
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
