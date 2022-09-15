#include "main.h"

/**
 * print_triangle - draws a triangle in the terminal
 * @size: is the height of the triangle to be drawn
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int n;

	n = size + 1;
	for (i = 1; i < n; i++)
	{
		print_char_ntimes(' ', n - i);
		print_char_ntimes('#', i);
		_putchar('\n');
	}
	_putchar('\n');
}
