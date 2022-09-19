#include "main.h"

/**
 * _puts - Function to print a string followed by a new line
 * 
 * @str: string input
 */

void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
