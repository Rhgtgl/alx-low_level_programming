#include <stdio.h>


/**
 * main - main block
 * compute and prints range of even numbers
 * Return: Always 0 (Success)
 */


int main(void)
{
	int a = 0, b = 1, rhg = 0;
	int sum = 0;

	while (rhg < 4000000)
	{
		rhg = a + b;
		a = b;
		b = rhg;
		if (rhg % 2 == 0)
			sum += rhg;
	}
	printf("%i\n", sum);
	return (0);
}
