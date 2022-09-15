#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: is the number of times the character '\' should be printed
 *
 * Return: On success 1.
 * On error, 0
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		print_char_ntimes(' ', i);
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
