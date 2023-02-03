#include "main.h"

/**
 * get_bit - function returns the value of a bit
 * @n: unsigned long
 * @index: index
 * Return: index otherwise -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 53)
		return (-1);
	return ((n >> index) & 1);
}
