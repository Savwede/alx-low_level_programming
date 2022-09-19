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
	int i = 0, len = strlen(str);

	while (i < len)
	{
		_putchar(*str);
		i++;
		str++;
	}

	_putchar('\n');
}
