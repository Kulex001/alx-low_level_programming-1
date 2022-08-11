#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - add node at the end of element
 * @head: pointer to the start
 * @str: str to add at the end
 * Return: last node of the list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int length;
	list_t *last, *ptr = (list_t *)malloc(sizeof(list_t));
	char *data = strdup(str);

	last = *head;
	if (ptr == NULL)
		return (NULL);
	if (data == NULL)
		length = 0;
	else
		length = strlen(data);

	ptr->str = data;
	ptr->len = length;
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = ptr;
	return (ptr);
}
