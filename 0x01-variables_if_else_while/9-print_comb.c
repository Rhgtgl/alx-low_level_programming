#include <stdio.h>


/**
 * main - print all possible combinations of single digits
 * Return: Always 0 (Success)
 */


int main(void)
{
	int g;


	for (g = 48; g < 58; g++)
	{
		putchar(g);
		if (g != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
