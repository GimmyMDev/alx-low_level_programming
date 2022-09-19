#include "main.h"

/**
 * swap_int - function that swaps values of two integers
 * @a: first int
 * @b: second int
 */

void swap_int(int *a, int *b)
{
	int swapped;

	swapped = *a;
	*a = *b;
	*b = swapped;
}
