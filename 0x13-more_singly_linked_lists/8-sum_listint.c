#include "lists.h"

/**
 * sum_listint - our function
 * @head: parama
 * Return: returns int
 */

int sum_listint(listint_t *head)
{
	int num = 0;

	if (!head)
		return (0);

	while (head)
	{
		num += head->n;
		head = head->next;
	}

	return (num);
}
