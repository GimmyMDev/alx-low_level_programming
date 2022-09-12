#include <stdio.h>
#include <stdlib.h>
#include<time.h>

/*
 * main - function
 *
 * Return: 0 if program that prints the alphabet in lowercase, followed by a new line
 */

int main(void)
{
	char low, e, q;
	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != e && low != q)
		{
			putchar(low);
		}
	}
	print('\n');

	return (0);
}
