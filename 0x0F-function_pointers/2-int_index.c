#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - points to a function that searches for an intege
 * @array: the name to be printed
 * @size: is the number of elements in the array
 * @cmp: a funtion that recieves a string parameter
 *
 * Return: returns the index of the first element
 * for which the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return (-1);

	int i, index;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			index = i;
			return (index);
		}
	}
	return (-1);
}
