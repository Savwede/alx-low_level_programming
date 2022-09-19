#include <string.h>
#include "main.h"
/**
 * rev_string -  takes a pointer to a string
 * and reverses the string,
 * followed by a new line, to stdou
 * @s: The pointer
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, tmp, len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
