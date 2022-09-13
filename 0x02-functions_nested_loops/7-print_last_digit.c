#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @i: Integer to test
 * Return: The value of the last digit
 */

int print_last_digit(int i)
{
	int p;

	p = (i % 10);

	if (p < 0)
		p *= -1;
	_putchar(p + '0');
	return (p);
}
