#include "main.h"

/**
 * string_toupper - converts all lowercase letters of a string to uppercase.
 *
 * @c: pointer to the string to convert
 *
 * Return: the converted string.
 *
 */

char *string_toupper(char *c)
{
	int a;

	a = 0;

	while (c[a] != '\0')
	{
		if (c[a] >= 'a' && c[a] <= 'z')
			c[a] -= 'a' - 'A';
		a++;
	}
	return (c);
}
