#include <string.h>
#include "main.h"
/**
 * print_rev -  takes a pointer to a string
 * and prints a string in reverse,
 * followed by a new line, to stdou
 * @s: The pointer
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i, len = strlen(s);

	for (i = 0; i < len; i++)
	{
		_putchar(s[len - i - 1]);
	}
	_putchar('\n');
}
