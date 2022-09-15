#include "main.h"

/**
 * print_square - draws a square in the terminal
 * @n: is the lenght of the square to be printed
 *
 * Return: void
 */
void print_square(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		print_char_ntimes('#', n);
		_putchar('\n');
	}
	_putchar('\n');
}
