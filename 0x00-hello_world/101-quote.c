#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 * @void: par indicates null arg
 *
 * Return: 1 indicating it's an err
 */
int main(void)
{
	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(s, strlen(s), 1, stderr);
	return (1);
}
