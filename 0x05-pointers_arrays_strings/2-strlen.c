#include <stdio.h>
#include "main.h"

/**
 * _strlen - function to print length of a string
 * @s: input string character
 * Return: Always 0
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
