#include "main.h"
/**
 * _isdigit - checks for digits
 * @c: The character to check
 *
 * Return: On success 1.
 * On error, 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
