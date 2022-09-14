#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers
 * from n to 98
 *
 * Return: void.
 */
void print_to_98(int n)
{
	int num;

	if (n <= 98)
	{
		for (num = n; num <= 98; num++)
		{
			if (num = 98)
				printf(num);
			else
				printf("%d, ", num);
		}
	} else
	{
		for (num = n; num >= 98; num--)
		{
			if (num = 98)
				printf(num);
			else
				printf("%d, ", num);
		}
	}
	printf('\n');
}
