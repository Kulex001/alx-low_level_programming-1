#include "main.h"
#include <string.h>

/**
 * _strpbrk - search for a string in another string
 * @s: string 1
 * @accept: string 2
 * Return: pointer to result
 */
char *_strpbrk(char *s, char *accept)
{
	char **ptr;
	char *ptr2;

	ptr = &ptr2;
	ptr2 = strpbrk(s, accept);

	return (*ptr);
}
