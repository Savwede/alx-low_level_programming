#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * _strcpy -  takes two pointers to to strings
 * and copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @src: The pointer to the source string
 * @dest: The pointer to the destination buffer
 * Return: a pointer to the destination buffer
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
