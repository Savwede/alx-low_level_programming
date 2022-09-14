#include "main.h"
/**
 * print_times_table - computes times table of 0 to n
 * if n is not greater than 15
 * @n: input
 * Return: Always +ve value,
 */
void print_times_table(int n)
{
	int i;
	int j;

	for (i = 0; i <= n; i++)
	{
		if (n < 0 || n > 15)
			break;
		for (j = 0; j <= n; j++)
		{
			if (j != 0)
			{
				_putchar(' ');
				if (i * j < 100)
					_putchar(' ');
				if (i * j < 10)
					_putchar(' ');
			}
			if (i * j > 99)
			{
				_putchar((i * j) / 100 + '0');
				int val = (i * j) % 100;

				_putchar(val / 10 + '0');
			} else if (i * j > 9)
			{
				_putchar((i * j) / 10 + '0');
			}
			_putchar((i * j) % 10 + '0');
			if (j < n)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
