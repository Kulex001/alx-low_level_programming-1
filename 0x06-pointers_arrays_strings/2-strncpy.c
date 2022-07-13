#include "main.h"
#include <string.h>

/**
 * _strncpy - copy one string into another
 * @dest: destination
 * @src: source
 * @n: size of char to copy
 *
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	char **point;

	point = &dest;
	strncpy(dest, src, n);
	*point = dest;

	return (*point);
}
