#include "main.h"

/**
 * main - Point of entry
 *
 * Return: Success 0
 */

int main(void)
{
	char *line = "_putchar";

	while (*line)
	{
		_putchar(*line);
		line++;
	}
	_putchar('\n');

	return (0);
}
