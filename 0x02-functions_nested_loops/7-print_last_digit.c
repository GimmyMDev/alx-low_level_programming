#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @i: Integer to test
 * Return: The value of the last digit
 */

int print_last_digit(int i)
{
	if (i < 0)
		i *= -1;
	_putchar((i % 10) + '0');
	return (i % 10);
}
