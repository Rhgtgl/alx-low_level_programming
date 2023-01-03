#include "main.h"
#define NULL 0

/**
 * _strchr - locate a character in string
 * @s: string
 * @c: target
 * Return: pointer to the character
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;

	if (s[i] == c)
		return (&s[i]);

	else
		return (NULL);
}
