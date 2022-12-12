#include <stdio.h>


/**
 * main - print lowercase alphabets in reverse a-z
 * Return: Always 0 (Success)
 */


int main(void)
{
	char rhg;

	for (rhg = 'z'; rhg >= 'a'; rhg--)
		putchar(rhg);

	putchar('\n');
	return (0);
}
