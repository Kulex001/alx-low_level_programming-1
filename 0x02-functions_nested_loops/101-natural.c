#include <stdio.h>

/**
 * main - entry point
 * @void: par rep null arg
 *
 * Return: 0 if successful
 */
int main(void)
{
	int s = 0, mul = 0;

	while (s < 1024)
	{
		if (s % 3 == 0 || s % 5 == 0)
			mul += s;
		s++;
	}

	printf("%d", mul);

	return (0);
}
