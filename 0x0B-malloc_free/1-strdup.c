#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - copy a string into another location
 * @str: string to copy
 * Return: pointer to the memory
 */
char *_strdup(char *str)
{
	char *ptr;

	if (str == NULL)
		return (NULL);
	ptr = strdup(str);

	return (ptr);
}
