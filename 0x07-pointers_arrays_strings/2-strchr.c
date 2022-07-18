#include "main.h"
#include <string.h>

/**
 * _strchr - search for a char in a string
 * @s: The string
 * @c: char to search
 * Return: pointer to the result
 */
char *_strchr(char *s, char c)
{
	char **ptr;
	char *ptr2;

	ptr = &ptr2;
	ptr2 = strchr(s, c);

	return (*ptr);
}
