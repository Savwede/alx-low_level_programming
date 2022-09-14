#include "main.h"
/**
* print_last_digit - computes the last digit of an integer.
* @val: input
*
* Return: Always +ve value,
*/
int print_last_digit(int val)
{
	int abs;

	abs = val % 10;
	if (abs < 0)
	{
		abs = -abs;
	}
	_putchar(abs + '0');
	return (abs);
}
