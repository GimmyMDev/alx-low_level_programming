#include "main.h"

/**
 * *_strcat - function to concatenate two strings
 *
 * @dest: Output string
 * @src: input strings
 *
 * Return: Concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
		for (b = 0; src[b] != '\0'; b++)
		{
			dest[a] = src[b];
			a++;
		}
	}
	return (dest);
}
