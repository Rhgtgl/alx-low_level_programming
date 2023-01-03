
#include "main.h"

/**
 * _memset - fills memory with bytes
 * @s: pointer to memory
 * @b: constants
 * @n: bytes of the memory
 * Return: pointer to memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		s[counter] = b;
	}
	return (s);
}
