#include "main.h"

/**
 * _islower - function that checks for lowercase character
 * @c: integer to test
 * Return: 1 if lowercase, else 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
