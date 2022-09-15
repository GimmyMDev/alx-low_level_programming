#include "main.h"

/**
 * print_numbers - prints the digits 1-9
 *
 * Return: 0-9 followed by newline
 */

void print_numbers(void)	
{
	int i = 0;		
		
	while (i <= 9)				
	{						
		_putchar(i + '0');						
		++i;
	}
	_putchar('\n');
				
}
