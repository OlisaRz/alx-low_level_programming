#include <string.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_node_end - add node to end of list
 * @head: pointer to first linked list
 * @str: pointer to string
 * 
 * Description: return required output
 *
 * Return: return pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *temp;
	size_t len = 0;
	char *new_string = NULL;

	if (head == NULL || str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	new_string = malloc(sizeof(char) * len);
	if (new_string == NULL)
		return (NULL);
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		free(new_string);
		return (NULL);
	}
	ptr->str = strdup(str);
	ptr->len = len;
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = ptr;
	return (*head);
}
