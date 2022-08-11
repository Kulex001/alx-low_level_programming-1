#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free memory of a list
 * @head: ptr to the list
 */
void free_list(list_t *head)
{
	list_t *first;

	while (head != NULL)
	{
		first = head;
		head = head->next;
		free(first);
	}
	free(head);
}
