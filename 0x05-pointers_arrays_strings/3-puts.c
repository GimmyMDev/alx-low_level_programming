#include "main.h"

/**
 * puts - Function to print a string followed by a new line
 * 
 * @str: sting input
 */

void puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
