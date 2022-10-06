#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an initialized buffer
 *
 * @nmemb: number of memory bytes
 * @size: number of data type bits
 *
 * Return: return pointer to initialized buffer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a, b;
	char *call;

	if (nmemb == 0 || size == 0)
		return (NULL);
	b = (nmemb * size);
	call = malloc(b);
	if (call == NULL)
		return (NULL);
	for (a = 0; a < b; a++)
	{
		call[a] = 0;
	}
	return (call);
}
