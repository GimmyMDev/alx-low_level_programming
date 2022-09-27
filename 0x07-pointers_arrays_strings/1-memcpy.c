#include "main.h"

/**
 * _memcpy - function to copy memory area
 *
 * @dest: destinantion mem area
 * @src: memory area
 * @n: number of bytes
 *
 * Return: dest pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
