#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
void process(bool, char **, char *, int, int, int, int);

/**
 * strtow - convert a string to words
 * @str: string yo convert
 * Return: pointer to array pointers
 */
char **strtow(char *str)
{
	char c;
	char **ptr, *ptr1, **ptr2, *string;
	int i, j, start, len, plen, lenw, count;
	bool isfirstword = true;

	if (str == NULL || strlen(str) == 0)
		return (NULL);
	start = 0;
	string = strdup(str);
	ptr = (char **)malloc(sizeof(char *));
	len = strlen(string);
	plen = 1;
	count = 0;
	i = 0;
	while (i < len)
	{
		c = string[i];
		if (c == 32 && string[i - 1] != 32 && i > 1)
		{
			for (j = i - 1; j > 0; j--)
			{
				if (string[j] == 32)
				{
					start = j;
					break;
				}
			}
			lenw = i - (start + 1);
			if (isfirstword)
			{
				process(true, ptr, string, plen, lenw, count, start);
				count++;
				plen++;
			}
			else
			{
				process(false, ptr, string, plen, lenw, count, start);
				count++;
				plen++;
			}
			isfirstword = false;
		}
		i++;
	}
	ptr1 = NULL;
	ptr2 = (char **)realloc(ptr, plen);
	ptr2[count] = ptr1;
	return (ptr2);
}

/**
 * process - preocess the string
 * @isfirstword: check if is first word
 * @ptr: pointer to array pointers
 * @string: string to process
 * @plen: length of the pointer
 * @lenw: length of word
 * @count: to keep counter of the array elements
 * @start: start point of the word
 */
void process(bool isfirstword, char **ptr, char *string,
			int plen, int lenw, int count, int start)
{
	int k, j;
	char ***ptr3, **ptr2, *ptr1;

	k = 0;
	j = 0;
	ptr3 = &ptr;
	if (isfirstword)
	{
		ptr1 = (char *)malloc(sizeof(char) * lenw);
		while (j <= lenw)
		{
			ptr1[k] = string[start + k];
			k++;
			j++;
		}
		*ptr3[count] = ptr1;
	}
	else
	{
		ptr2 = (char **)realloc(ptr, plen);
		ptr1 = (char *)malloc(sizeof(char) * lenw);
		while (j <= lenw)
		{
			ptr1[k] = string[start + k];
			k++;
			j++;
		}
		ptr2[count] = ptr1;
		*ptr3 = ptr2;
	}
}
