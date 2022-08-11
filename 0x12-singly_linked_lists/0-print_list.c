#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - print elements of a list
 * @h: pointer to the list
 * Return: size of the list
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%i] (%s)\n", 0, "nil");
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		size++;
	}
	return (size);
}
