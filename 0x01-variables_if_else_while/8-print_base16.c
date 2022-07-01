#include <stdio.h>

int main(void)
{
	int start = '0';
	char strt = 'a';

	for (; start <= '9'; start++)
	{
		putchar(start);
	}

	for(; strt <= 'f'; strt++)
	{
		putchar(strt);
	}
	putchar('\n');

	return (0);
}
