#include "main.h"
/**
 * print_char_ntimes - prints a given character,
 * a given number of times to the terminal
 * @c: the character to be printed
 * @n: is the number of times the space character should be printed
 *
 * Return: void.
 */

void print_char_ntimes(char c, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(c);
	}
}

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
if (n == 0)
	_putchar('\n');
}
