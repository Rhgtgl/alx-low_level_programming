#include <stdio.h>

/**
 * main - print lowercase of numbers in base 16
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;
	char tgl;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (tgl = 'a'; tgl <= 'f'; tgl++)
		putchar(tgl);

	putchar('\n');
	return (0);
}
