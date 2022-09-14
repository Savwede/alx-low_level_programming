#include "main.h"
/**
 * print_last_digit - computes the last digit of an integer.
 *
 * Return: Always +ve value,
 */
int print_last_digit(int val)
{
	int abs = val;

	if (val < 0)
		abs =(val * (-1));
	_putchar(abs % 10 + '0');
	return (abs % 10);
}
