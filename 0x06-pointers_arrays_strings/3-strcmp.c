#include "main.h"
#include <string.h>
/**
 * _strcmp - compares sting s2 to string s1
 * @s2: pointer to the source string
 * @s1: pointer to the destination string
 *
 * Return: integer always
 */

int _strcmp(char *s1, char *s2)
{
	int ch;

	ch = strcmp(s1, s2);
	return (ch);
}
