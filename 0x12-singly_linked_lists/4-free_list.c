#include "lists.h"
#include <stdlib.h>

/**
 * free_list - main function
 * @head: function param
 */

void free_list(list_t *head)
{
	list_t *pr;
	pr = head;

	while (head != NULL)
	{
		if (pr != NULL)
			free(pr);
		else
			free(head);
		head = head -> next;
	}
}
