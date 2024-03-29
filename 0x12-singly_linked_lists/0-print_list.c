#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints elements of list
 * @h: pointer to first linked list
 *
 * Description: prints required output
 */

size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
