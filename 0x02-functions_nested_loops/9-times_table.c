#include "main.h"


/**
 * times_table - prints 9th multiplication table
 * Return: Always 0 (Success)
 */


void times_table(void)
{
	int r, h, g;

	for (r = 0; r <= 9; r++)
	{
		_putchar('0');

		for (h = 1; h <= 9; h++)
		{
			_putchar(',');
			_putchar(' ');

			g = r * h;

			if (g <= 9)
				_putchar(' ');
			else
				_putchar((g / 10) + '0');
			_putchar((g % 10) + '0');
		}
		_putchar('\n');
	}
}
