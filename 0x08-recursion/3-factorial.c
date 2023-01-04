#include "main.h"

/**
 * factorial - function return factirial of a given number
 * @n: input numbers
 * Return: expected factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
