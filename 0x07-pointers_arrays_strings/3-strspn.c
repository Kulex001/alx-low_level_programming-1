#include "main.h"
#include <string.h>

/**
 * _strspn - scan a string and search a given string
 * @s: string to be scanned
 * @accept: string to scan
 * Return: size of accept contained in s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int t;

	t = strspn(s, accept);

	return (t);
}
