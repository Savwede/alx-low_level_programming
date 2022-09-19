#include <string.h>
#include "main.h"
/**
 * _puts -  takes a pointer to a string
 * and prints a string, followed by a new line, to stdou
 * @*str: The pointer
 *
 * Return: void
 */

void _puts(char *str)
{
	char *s;
	int i = 0;

	s = str;
	while (i < strlen(s))
	{
		_putchar(*str);
		i++;
		*str++;
	}

	_putchar('\n');
}
