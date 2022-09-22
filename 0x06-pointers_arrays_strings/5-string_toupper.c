#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @src: pointer to the source string
 *
 * Return: a pointer to the destination string
 */

char *string_toupper(char *src)
{
	char *s;
	int i, len = strlen(src);

	s = src;
	for (i = 0; i < len; i++)
	{
		s[i] = toupper(s[i]);
	}
	return (s);
}
