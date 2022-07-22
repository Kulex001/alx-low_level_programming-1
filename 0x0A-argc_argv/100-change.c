#include <stdio.h>
#include <stdlib.h>
void counter(int);

/**
 * main - calc min num of coins required
 * @argc: counter of argv
 * @argv: argument passed
 * Return: 1 for error 0 for success
 */
int main(int argc, char *argv[])
{
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	if (num < 0)
		printf("%d\n", 0);
	else
		counter(num);
	return (0);
}

/**
 * counter - do the counter for main
 * @num: number passed
 */
void counter(int num)
{
	int count, div;

	count = 0;
	while (num > 0)
	{
		if (num > 25)
		{
			div = num / 25;
			count += div;
			num = num % 25;
		}
		if (num > 9 && num < 25)
		{
			div = num / 10;
			count += div;
			num = num % 10;
		}
		if (num > 4 && num < 10)
		{
			count++;
			num = num - 5;
		}
		if (num > 1 && num < 5)
		{
			div = num / 2;
			count += div;
			num = num % 2;
		}
		if (num == 1)
		{
			count++;
			num--;
		}
	}
	printf("%d", count);
}
