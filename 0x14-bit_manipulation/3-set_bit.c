#include "main.h"

/**
 * set_bit - function sets the value of a bit to 1
 * @n: unsigned long
 * @index: index
 * Return: 1 otherwise -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 53 || !n)
		return (-1);
	(*n |= 1 << index);
	return (1);
}
