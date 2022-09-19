#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * print_array -  takes a pointer to a array
 * and prints n elements of the array
 * @a: The pointer to the array
 * @n: the number of elements to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			printf("%d, ", *a);
		else
			printf("%d", *a);

		a++;
	}
	printf("\n");
}
