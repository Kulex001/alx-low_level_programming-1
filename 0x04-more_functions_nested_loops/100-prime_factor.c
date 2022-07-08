#include <stdio.h>
void numcheck(long);

/**
 * main - main method
 *
 * Return: 0 if successful
 */
int main(void)
{
	numcheck(612852475143);

	return (0);
}

/**
 * numcheck - look for divisibility of num
 * @n: num to check
 */
void numcheck(long n)
{
	if (n % 2 == 0)
	{
		n /= 2;
		numcheck(n);
	}
	else if(n % 3 == 0)
	{
		n /= 3;
		numcheck(n);
	}
	else if (n % 5 == 0)
	{
		n /= 5;
		numcheck(n);
	}
	else if (n % 7 == 0)
	{
		n /= 7;
		numcheck(n);
	}
	printf("%ld", n);
	return;
}
