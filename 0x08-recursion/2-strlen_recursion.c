#include "main.h"

/**
 * _strlen_recursion - function prints length of strings
 * @s: check character
 * Return: display length
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);
}
