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
	int len = strlen(s);

	if (len > 1)
	{
		print_rev(s++);
	}
	_putchar(*s);
}
