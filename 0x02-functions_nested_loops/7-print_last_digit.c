#include "main.h"
/**
* print_last_digit - computes the last digit of an integer.
* @val: input
*
* Return: Always +ve value,
*/
int print_last_digit(int val)
{
	if (val < 0)
	{
		val = (val * (-1));
	}
	_putchar((val % 10));
	return ((val % 10));
}
