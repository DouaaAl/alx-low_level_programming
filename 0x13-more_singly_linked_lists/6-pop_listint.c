#include "lists.h"
#include "stdlib.h"

/**
 * pop_listint - function
 * @head: param
 * Return: returns integer
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num = 0;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
