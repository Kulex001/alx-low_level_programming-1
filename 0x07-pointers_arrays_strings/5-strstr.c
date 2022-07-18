#include "main.h"
#include <string.h>

/**
 * _strstr - search for a string
 * @haystack: string to be searched
 * @needle: string to search
 * Return: pointer to reult
 */
char *_strstr(char *haystack, char *needle)
{
	char **ptr;
	char *ptr2;

	ptr = &ptr2;
	ptr2 = strstr(haystack, needle);

	return (*ptr);
}
