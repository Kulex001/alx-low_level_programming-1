#include <stdio.h>
#include <stdbool.h>

/**
 * main - method entry
 * @void: par indicates null arg
 *
 * Return: 0 indicating succes
 */
int main(void)
{
	int i,  j, k;
	bool repeat = true;

	for (i = 48; i <= 57 && repeat; i++)
	{
		for (j = 48; j <= 57 && repeat; j++)
		{
			for (k = 48; k <= 57 && repeat; k++)
			{
				if (i == j ||  j == k|| j < i ||k < j)
				{
					continue;
				}
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == 55 && j == 56 && k == 57)
				{
					repeat = false;
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
