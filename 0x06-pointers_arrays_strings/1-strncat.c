#include "main.h"
#include <string.h>
/**
 * _strncat - concats n bytes of sting src into string dest
 * @src: pointer to the source string
 * @dest: pointer to the destination string
 * @n: the number of bytes of src to be concatinated
 * Return: a pointer to the destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ch;

	ch = strncat(dest, src, n);
	return (ch);
}
