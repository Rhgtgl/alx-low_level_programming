#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function to act on array elements
 * @array: Name of the array
 * @size: size of the array
 * @action: the function
 * Return: VOID
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
