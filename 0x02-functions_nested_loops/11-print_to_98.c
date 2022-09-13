#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Print all natural numbers to 98
 * @i: the counting number
 * Return: void
 */

void print_to_98(int i)
{
	if (i <= 98)
	{
		for (i = i; i <= 98; i++)
			printf("%d, ", i);
	}
	else
	{
		for (i = i; i >= 98; i--)
			printf("%d, ", i);
	}
}
