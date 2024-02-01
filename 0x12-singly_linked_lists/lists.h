#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>

/**
 * struct list_s - simply linked list
 * @str: first param
 * @len: second param
 * @next: third param
 * Description: singly linked lists
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);

#endif
