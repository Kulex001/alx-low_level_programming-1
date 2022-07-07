#include <stdio.h>

/**
 * main - compute sum of fibonacci num
 *
 * Return: 0 for success
 */
int main(void)
{
	int curr = 2, prev = 1, next, count = 2;

	while (next < 4000000)
	{
		next = curr + prev;

		if (next % 2 == 0)
		{
			count += next;
		}

		curr = next;
		prev = curr;
	}
	printf("%d\n", count);

	return (0);
}
