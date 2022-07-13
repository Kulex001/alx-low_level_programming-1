#include "main.h"
#include <string.h>

/**
 * _strncat - join two strings tongether
 * @dest: destination string
 * @src: string to copy from
 * @n: num of char ti copy
 *
 * Return: joinrd string
 */
char *_strncat(char *dest, char *src, int n)
{
	char **point;

	point = &dest;
	strncat(dest, src, n);
	*point = dest;

	return (*point);
}
