#include <string.h>
#include "main.h"
/**
 * print_rev -  takes a pointer to a string
 * and prints a string in reverse,
 * followed by a new line, to stdou
 * @*s: The pointer
 *
 * Return: void
 */

void print_rev(char *s)
{
	char *str;
	int i = 0, len = strlen(s);

	str = s;

	if (len > 1)
	{
		print_rev(s++);
	}
	_putchar(*s);
}
