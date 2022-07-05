#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 if successful
 */
int main(void)
{
	int prev = 1, curr = 2, count = 0, next;

	printf("%d\, %d",prev, curr);
	while (count <= 48)
	{
		next = prev + curr;

		printf("\, %u", next);
		prev = curr;
		curr = next;
		count++;
	}
	return (0);
}
