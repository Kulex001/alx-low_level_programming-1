#include <stdio.h>

/**
 * main - compute sum of fibonacci num
 *
 * Return: 0 for success
 */
int main(void)
{
	int curr = 2, prev = 1, next, count = 3;

	while (next < 4000000)
	{
		next = curr + prev;

		count += next;

		curr = next;
		prev = curr;
	}
	printf("%ld\n", count);

	return (0);
}
