#include "main.h"

/**
 * _isdigit - Function to check if it is a digit
 * @c: variable to test
 * Return: 1 if it is a digit
 * Return 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
