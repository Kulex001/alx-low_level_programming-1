#include "function_pointers.h"

/**
 * int_index - return an index of a num
 * @array: array to search
 * @size: size of the array
 * @cmp: function pointer for compairing
 * Return: index of the int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, num;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		num = cmp(*(array + i));
		if (num != 0)
			return (i);
	}
	return (-1);
}