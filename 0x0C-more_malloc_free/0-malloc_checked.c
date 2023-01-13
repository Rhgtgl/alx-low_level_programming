#include <stdio.h>
#include <stdlib.h>
#inclde: "main.h"

/**
 * malloc_checked - function allocates memory
 * @b: integer variable
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
