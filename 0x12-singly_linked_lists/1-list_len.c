#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * list_len - lists length of elements
 * @h: singly linked list
 *
 * Description: return required output
 *
 * Return: return length
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr = NULL;
	size_t len = 0;

	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr != NULL)
	{
		len++;
		ptr = ptr->next;
	}
	return (len);
}
