#include <stdio.h>
#include "main.h"

/**
 * print_array - function prints element of an array of integers
 * @a: pointer character
 * @n: integer character
 */
print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i))
		if (i != (n -1))
			printf(",");
	}
	printf("\n");
}
