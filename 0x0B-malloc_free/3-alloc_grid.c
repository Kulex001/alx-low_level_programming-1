#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid- allocate a memory of a 2d array and initialize it
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to array pointer
 */
int **alloc_grid(int width, int height)
{
	int i, **ptr1, *ptr2;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr1 = (int **)malloc(height * sizeof(int *));
	if (ptr1 == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr2 = (int *)calloc(width, sizeof(int));
		ptr1[i] = ptr2;
	}
	return (ptr1);
}
