#include "main.h"
#include <stdio.h>

/**
 * print_times_table - print the 100th multiplication the table
 * @p: value by the user
 * Return: Always 0
 */

void print_times_table(int p)
{
	int t;
	int g;
	int l;

	if (p < 0 || p >= 15)
		return;
	for (t = 0; t <= p; t++)
	{
		for (g = 0; g <= p; g++)
		{
			l = (t * g);
			if (g == 0)
				_putchar('0' + l);
			else
			{
				_putchar(',');
				_putchar(' ');
				if (l <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + l);
				}
				else if (l > 9 && l < 100)
				{
					_putchar(' ');
					_putchar('0' + (l / 10));
					_putchar('0' + (l % 10));
				}
				else if (l >= 100)
				{
					_putchar('0' + (l / 100));
					_putchar('0' + ((l / 10) % 10));
					_putchar('0' + (l % 10));
				}
			}
		}
		_putchar('\n');
	}
}
