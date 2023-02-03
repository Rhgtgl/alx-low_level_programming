#include "main.h"

/**
 * get_endianness - function checks foe endianness
 * Return: 0 otherwise 1
 */

int get_endianness(void)
{
	unsigned int b = 1;
	char *a = (char *)&b;

	if (*a)
		return (1);

	return (0);
}
