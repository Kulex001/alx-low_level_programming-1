#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_node - add a node at the beginning of the list
 * @head: first node of the list
 * @str: data to insert in the new node
 * Return: pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	int length;
	list_t  *ptr = (list_t *)malloc(sizeof(list_t));
	char *data = strdup(str);

	if (ptr == NULL)
		return (NULL);
	if (str == NULL)
		length = 0;
	else
		length = strlen(data);

	ptr->str = data;
	ptr->len = length;
	if (*head == NULL)
		ptr->next = NULL;
	else
		ptr->next = *head;
	*head = ptr;
	return (ptr);
}
