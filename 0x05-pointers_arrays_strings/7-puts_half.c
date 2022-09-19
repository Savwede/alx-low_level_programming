#include <string.h>
#include "main.h"
/**
 * puts_half -  takes a pointer to a string
 * and prints half string,
 * starting with the first character,
 * followed by a new line, to stdou
 * @str: The pointer
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, n, len = strlen(str);

	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2;
	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
