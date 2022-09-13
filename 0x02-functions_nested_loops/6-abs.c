#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 * @i: Integer to be converted
 * Return: Absolute value of integer
 */

int _abs(int i)
{
	if (i < 0)
		i *= -1;
	return (i);
}
