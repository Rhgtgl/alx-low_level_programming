#include <stdio.h>
#include "main.h"

/**
 * swap_int - function that swaps values of integers
 * @a: first parameter
 * @b: second parameter
 * int c: addressed parameter
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

