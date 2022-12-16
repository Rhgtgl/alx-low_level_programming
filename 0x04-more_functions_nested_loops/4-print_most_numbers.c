#include "main.h"

/**
 * print_most_numbers - print numbers
 * Return: non
 */

void print_most_numbers(void)
{
	int rhg;

	for (rhg = 48; rhg < 58; rhg++)
	{
		if (rhg != 50 && rhg != 52)
		{
			_putchar(rhg);
		}
	}
	_putchar('\n');
}
