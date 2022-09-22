#include <string.h>
#include "main.h"
/**
 * puts2 -  takes a pointer to a string
 * and prints every other character of a string,
 * starting with the first character,
 * followed by a new line, to stdou
 * @str: The pointer
 *
 * Return: void
 */

void puts2(char *str)
{
	int i, len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
