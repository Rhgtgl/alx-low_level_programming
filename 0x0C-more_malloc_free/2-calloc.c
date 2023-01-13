#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _memset - copy char
 * @s: string
 * @b: input
 * @n: bytes
 * Return: string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * _calloc - function allocates memory
 * @nmemb: n elements
 * @size: bytes
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	P = malloc(nmemb * size);

	if (p == NULL)
	{
		return (NULL);
	}
	_memset(p, 0, (nmemb * size));

	return (p);
}
