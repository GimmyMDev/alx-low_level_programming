#include "main.h"

/**
 * _islower - function that checks for lowercase character
 *
 * Return: 1 if it's lowercase
 * Return: 0 if otherwise
 */

int islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
