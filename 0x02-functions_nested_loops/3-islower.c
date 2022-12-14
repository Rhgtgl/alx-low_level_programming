#include "main.h"


/**
 * _islower - character checks emphasis on lowercase
 * @c: compare character
 * Return: 1 if its lowercase 0 otherwise
 */


int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
}
