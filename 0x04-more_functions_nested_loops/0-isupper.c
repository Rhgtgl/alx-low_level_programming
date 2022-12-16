#include "main.h"

/**
 * _isupper - check uppercase characters
 * @c: parameters
 * Return: 0 if (Successful)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
