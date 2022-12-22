#include "main.h"

/**
 * _strcmp - function that compares strings
 * @s1: first
 * @s2: second
 * Return: Value < 0, > 0, and 0
 */

int _strcmp(char *s1, char *s2)
{
	int counter, comVal;

	counter = 0;

	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}

	comVal = s1[counter] - s2[counter];
	return (comVal);
}
