#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * argstostr - converts fn args to a string
 * @ac: args counter
 * @av: args
 * Return: pointer to the string
 */
char *argstostr(int ac, char **av)
{
	char *ptr, *ptr2, *str;
	int i, size, len;

	i = 0;
	size = 0;
	if (ac == 0)
		return (NULL);
	while (i < ac)
	{
		str = av[i];
		len = strlen(str);
		if (i == 0)
		{
			ptr = (char *)malloc(sizeof(char) * len);
			size = len + 1;
			ptr = strdup(str);
			strcat(ptr, "\n");
			i++;
			continue;
		}
		size += len + 1;
		ptr2 = realloc(ptr, size);
		strcat(ptr2, str);
		strcat(ptr2, "\n");
		ptr = ptr2;
		i++;
	}
	return (ptr);
}
