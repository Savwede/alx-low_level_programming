#include "main.h"
void spaces(int n);

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
		spaces(i);
		_putchar('\\');
		_putchar('\n');
	}
if (n == 0)
	_putchar('\n');
}

/**
 * spaces - prints space in the terminal
 * @n: is the number of times the space character should be printed
 *
 * Return: void.
 */

void spaces(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(' ');
	}
}
