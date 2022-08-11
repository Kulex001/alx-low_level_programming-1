#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * list_len - print elements of a list
 * @h: pointer to the list
 * Return: size of the list
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}
