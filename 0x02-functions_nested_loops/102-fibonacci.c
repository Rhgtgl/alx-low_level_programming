#include <stdio.h>

/**
 * main _ any
 * Return: any
 */

int main(void)

{
	long int t, a, l, b;

	a = 1;
	l = 2;

	for (t = 1; t <= 50; ++t)
	{
		if (a != 20365011074)
		{
			printf("%ld,", a);
		}

		else
		{
			printf("%ld\n", a);
		}

		b = a + l;
		a = l;
		l = b;
	}

	return (0);
}
