#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: size of argv
 * @argv: arguments passed to the program
 * Return: 0 for success 1 for errors
 */
int main(int argc, char *argv[])
{
	int j, k, mul;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	j = atoi(argv[1]);
	k = atoi(argv[2]);
	mul = j * k;
	printf("%d\n", mul);
	return (0);
}
