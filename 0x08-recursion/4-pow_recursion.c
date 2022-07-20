#include "main.h"

/**
 * _pow_recursion - raises a num to power of another
 * @x: base num
 * @y: power
 * Return: x power y
 */
int _pow_recursion(int x, int y)
{
	if (y == 1)
		return (x);
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
