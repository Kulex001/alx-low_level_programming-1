#include "main.h"
#include <string.h>

/**
 * _memcpy - copies n b-size from src to dest
 * @dest: destination
 * @src: source
 * @n: size to copy
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char **ptr;

	ptr = &dest;
	memcpy(dest, src, n);
	*ptr = dest;
	return (*ptr);
}
