#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - function multiplies two numbers
 * @argc: count
 * @argv: vector
 * Return: 0 otherwise 1
 */

int main(int argc, char **argv)
{
	int n, m, diff;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	m = atoi(argv[2]);
	diff = n * m;

	printf("%i\n", diff);
	return (0);
}
