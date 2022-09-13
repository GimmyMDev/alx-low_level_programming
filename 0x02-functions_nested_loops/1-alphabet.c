#include "main.h"

/**
 * print_alphabet - Function that prints alaphbets in lowercase
 *
 * Return: Success 0 (Always)
 */

void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');

	return (0);
}
