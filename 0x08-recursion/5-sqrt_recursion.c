#include "main.h"

/**
 * evaluate_num - recursion loop
 * @num: num
 * @iterator: numberto iterate
 */
int evaluate_num(int num, int iterator)
{
	if (iterator == num - 1)
	{
		return (1);
	}

	else if (num % iterator == 0)
	{
		return (0);
	}

	if (num % iterator != 0)
	{
		return (evaluate_num(num, iterator + 1));
	}

	return (0);
}

/**
 *int is_prime_number _ function returns integer of a prime number
 * @num: input character
 * Return: 1 otherwise 0 
 */

int is_prime_number(int num)
{
	int iterator;
	iterator = 2;
	if (num < 2)
	{
		return (0);
	}
	if (num == 2)
	{
		return (1);
	}
	return (evaluate_num(num, iterator));
}
