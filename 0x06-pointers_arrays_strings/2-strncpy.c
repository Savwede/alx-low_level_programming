#include "main.h"
#include <string.h>
/**
 * _strncpy - copies sting src into string dest
 * @src: pointer to the source string
 * @dest: pointer to the destination string
 * @n: nuber of bytes to be coppied
 * Return: a pointer to the destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *ch;

	ch = strncpy(dest, src, n);
	return (ch);
}
