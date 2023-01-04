#include "main.h"

/**
 * palindromeChecker - checks strings
 * @str: string character
 * @len: length of steings
 * @i: incrementers
 * Return:1 otherwise 0
 */

int palindromeChecker(char *str, int len, int i)
{
	if (i < len && str[i] == str[len])
		return (palindromeChecker(str, len - 1, i + 1));
	if (str[i] != str[len])
		return (0);
	return (1);
}

/**
 * _strlen_recursion - returns length of strings
 * @s: checks length
 * Return: display lengths
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 * is_palindrome - checks for string
 * @s: strings character
 * Return: 1 otherwise 0
 */

int is_palindrome(char *s)
{
	int i = 0;
	int length = _strlen_recursion(s) - 1;

	return (palindromeChecker(s, length, i));
}
