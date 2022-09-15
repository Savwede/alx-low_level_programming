#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: The character to check
 *
 * Return: On success 1.
 * On error, 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
