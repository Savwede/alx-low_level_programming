#include "main.h"

/**
 * more_numbers - prints 0 to 14  ten times.
 *
 * Return: void
 */

void more_numbers(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
				_putchar((j / 10) + '0');

			_putchar((j % 10) + '0');
		}
		i++;
		_putchar('\n');
	}

}
