#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - main function
 * @head: first param
 * @str: second param
 * Return: returns list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp;
	unsigned int i, count = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	for (i = 0 ; str[i] != '\0' ; i++)
		count++;
	new_node->len = count;
	new_node->next = NULL;
	tmp = *head;
	if (tmp == NULL)
		*head = new_node;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}
	return (*head);
}
