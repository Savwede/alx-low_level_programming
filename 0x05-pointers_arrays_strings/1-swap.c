#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * and updates the value it points to to 98
 * @a: pointer to first value
 * @b: pointer to second value
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
