#include "lists.h"
#include <stdlib.h>

/**
 * free_list - main function
 * @head: function param
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head);
}
