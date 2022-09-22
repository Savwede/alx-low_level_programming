#include "main.h"
#include <string.h>
/**
 * reverse_array - recieves a pointer and length of an array
 * and reverse the positions of the array's elements
 * @a: pointer to the array
 * @nt: length
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i- 1] = tmp;
	}
}
