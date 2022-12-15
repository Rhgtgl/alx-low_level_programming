#include "main.h"

/**
 * _isupper - check uppercase characters
 * @c: parameter
 * Return: 0 (Success)
 */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
