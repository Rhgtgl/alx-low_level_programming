#include "main.h"

/**
 * _pow_recursion - function returns value of x power
 * @x: input values
 * @y: input power
 * Return: Always successful
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * (_pow_recursion(x, y - 1)));
}
