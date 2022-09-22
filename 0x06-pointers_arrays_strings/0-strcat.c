#include "main.h"
#include <string.h>
/**
 * _strcat - concats sting src into string dest
 * @src: pointer to the source string
 * @dest: pointer to the destination string
 *
 * Return: a pointer to the destination string
 */

char *_strcat(char *dest, char *src)
{
	char *ch;

	ch = strcat(dest, src);
	return (ch);
}
