#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 *
 * @val input parameter
 * Return: Always +ve value,
 */
int _abs(int val)
{
	if (val < 0)
		return (val * (-1));
	return (val);
}
