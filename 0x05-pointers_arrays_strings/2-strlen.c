#include "main.h"

/**
 * _strlen - length of a string
 * @s: character test
 * Return:: Index
 */

int _strlen(char *s)
{
	int index;
	
	for (index = 0; s[index] != '\0' ; index++)
		;
	return (index);
}
