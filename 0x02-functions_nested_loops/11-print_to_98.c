#include <stdio.h>
#include "main.h"


/**
 * print_to_98 - print natural numbers to 98
 * @n: series
 */

void print_to_98(int k)
{
	if (k >= 98)
	{
		while (k > 98)
			printf("%d, ", k--);
		printf("%d\n", k);
	}
	else
	{
		while (k < 98)
			printf("%d, ", k++);
		printf("%d\n", k);
	}
}
