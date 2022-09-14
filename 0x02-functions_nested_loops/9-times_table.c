#include "main.h"
/**
 * times_table - computes times table of 0 to 9
 *
 * Return: Always +ve value,
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j != 0)
				_putchar(' ');
			if (i*j < 10)
			{
				_putchar(' ');
			}
			if (i*j > 9)
				_putchar((i*j)/10 +'0');
			_putchar((i * j)%10 + '0');
			if (j < 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
	return (0);
}
