#include "main.h"

/**
 * _isupper - Function to check for uppercase characters
 * @c: variable to test
 * Return: 1 if uppercase
 * Return 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}	
	else
	{
		return (0);
	}
}
