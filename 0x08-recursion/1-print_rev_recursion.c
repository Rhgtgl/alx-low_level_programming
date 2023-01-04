#include "main.h"

/**
 * _print_rev_recursion - function prints strings in reverse
 * @s: pointer character
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
