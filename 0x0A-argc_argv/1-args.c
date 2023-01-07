#include <stdio.h>
#include "main.h"

/**
 * main - function prints arguments
 * @argc: count argument
 * @argv: vector argument
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
