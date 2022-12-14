#include "main.h"
#include <stdio.h>

/**
 * main - Entry
 * compute sum of multiples of 3 and 5 below 1024
 * Return: Always 0 
 */

int main(void)

{
	int p, q;

	for (p = 0; p < 1024; ++p;)
	{
		if ((p % 3 == 0) || (p % 5 == 0))
		q += p;
	}
	printf("%d\n", q);

	return (0);
}
