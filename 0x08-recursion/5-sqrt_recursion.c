#include "main.h"

/**
 * helper - square root of two numbers
 * @a: the number
 * @b: test character
 * Return: square root
 */

int helper(int a, int b)
{
	if (b * b > a)
		return (-1);
	else if (b * b == a)
		return (b);
	else
		return (helper(a, b + 1));
	return (1);
}

/**
 * _sqrt_recursion - return the natural square root  of a number
 * @n: the number
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (helper(n, 1));
}
