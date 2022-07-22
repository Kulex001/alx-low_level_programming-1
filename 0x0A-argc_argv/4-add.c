#include <stdio.h>
#include <stdlib.h>

/**
 * main - add numbers tongether
 * @argc: size of argv
 * @argv: args passed to the fn
 * Return: 0 for success 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i, j, sum;

	if (argc < 2)
	{
		printf("%d", 0);
	}
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			j = atoi(argv[i]);
			if (j == 0 && *argv[i] != '0')
			{
				printf("Error\n");
				return (1);
			}
			sum += j;
		}
		printf("%d", sum);
	}
	return (0);
}
