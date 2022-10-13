#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function
 * given as a parameter on each element of an array
 * @array: the array to operate on
 * @size: size of the array
 * @action: a funtion that operate on each element of array
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i, n = size;

	for (i = 0; i < n; i++)
	{
		action(array[i]);
	}
}
