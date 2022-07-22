#include <stdio.h>

/**
 * main - print the first arg
 * @argc: size of argv
 * @argv: arguments passed
 * Return: 0 for success
 */
int main(int __attribute__ ((unused)) argc, char *argv[])
{
	printf("%s", argv[0]);
	return (0);
}
