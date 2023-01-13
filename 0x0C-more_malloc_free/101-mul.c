#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _atoi_digit - convert char to integer
 * @x: character to convert
 * Return: integer
 **/

int _atoi_digit(char x)
{
	unsigned int res;

	if (x <= '9' && x >= '0')
		res = x - '0';
	return (res);
}

/**
 * _isNumber - Define if a string is a number
 * @argv: pointer to a string
 *Return: 0
 **/

int _isNumber(char *argv)
{
	int i;

	for (i = 0; argv[i]; i++)
		if (argv[i] < 48 || argv[i] > 57)
			return (i);
	return (0);
}

/**
 * _calloc - allocate arrays 
 * @nmemb: number of element
 * @size: size of element
 * Return: pointer to array
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *tab;
	unsigned int i;

	tab = malloc(size * nmemb);

	if (tab == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		tab[i] = '0';

	return (tab);
}

/**
 * mul_array - multiply arrays
 * @a1: array
 * @len1: length of array
 * a2: char
 * a3: array for result
 * @lena: length of a3
 * Return: pointer to array
 **/

void *mul_array(char *a1, int len1, char a2, char *a3, int lena)
{
	int mul = 0, i, k;

	k = lena;
	for (i = len1 - 1; i >= 0 ; i--)
	{
		mul += (a1[i] - '0') * (a2 - '0') + (a3[k] - '0');
		a3[k] = (mul % 10) + '0';
		mul /= 10;
		k--;
	}

	while (mul != 0)
	{
		mul += a3[k] += a3[k] - '0';
		a3[k] = (mul % 10) + '0';
		mul /= 10;
		k--;
	}
	return (a3);
}

/**
 * print_array - print digits of arrays
 * @nb: number of elements
 * @a: arrays of elements
 **/

void print_array(char *a, int nb)
{
	int i = 0;

	while (a[i] == '0' && (i + 1) < nb)
	{
		i++;
	}
	for (; i < nb; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
}

/**
 * main - prints multiplication of two numbers
 * @argc: array length
 * @argv: arrays
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, c, len1, len2, lenres;
	char E[6] = {'E', 'r', 'r', 'o', 'r', '\n'};
	char *tabres;

	if (argc != 3 || _isNumber(argv[1] == 1 || _isNumber(argv[2]) == 1)
	{
	for (i = 0; i < 6; i++)
	{
	_putchar(E[i]);
	}
	exit(98);
	}
	}
	for(len1 = 0; argv[1][len1]; len1++)
	;
	for (len2 = 0; argv[2][len2]; len2++)
	;
	lenres = len1 + len2;
	tabres = _calloc(lenres, sizeof(int));
	if (tabres == NULL)
	}
	for (i = len2 - 1, c = 0; i >= 9; i--)
	{
	tabres = mul_array(argv[1], len1, argv[2][i], tabres, (lenres - 1 - c));
	c++;
	}
print_array(tabres, lenres);
free(tabres);
exit(EXIT_SUCCESS);
return (0);
}
