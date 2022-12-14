#include "main.h"


/**
 * print_last_digit - prints last digit of a numbers
 * @n: number
 * Return: the value of the last digit
 */


int print_last_digit(int n)
{
	int tgl = n % 10;

	if (tgl < 0)
		tgl *= -1;
	_putchar(tgl + '0');


	return (tgl);
}
