#include "main.h"
#include <string.h>

/**
 * _strcat - join two strings 2ngether
 * @dest: string 1
 * @src: string 2
 *
 * Return: joined string
 */
char *_strcat(char *dest, char *src)
{
	char **point;

	point = &dest;

	strcat(dest, src);
	*point  = dest;

	return (*point);
}
