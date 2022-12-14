#include "main.h"


/**
 * print_alphabet_x10 - prints 10 times alphabets
 */


void print_alphabet_x10(void)
{
	int ten;
	char rhg;


	for (ten = 0; ten <= 9; ten++)
	{
		for (rhg = 'a'; rhg <= 'z'; rhg++)
			_putchar(rhg);
		_putchar('\n');
	}
}
