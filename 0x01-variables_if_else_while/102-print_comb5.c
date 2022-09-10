#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * C - Variables, if, else, while
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int s;
	int v;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			v = 0;
			while (v < 10)
			{
				s = 0;
				while (s < 10)
				{
					if ((v + s > i + j) && v >= i && i >= j)
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(' ');
						putchar(v + '0');
						putchar(s + '0');
						if (j < 8 || i < 9)
						{
							putchar(',');
							putchar(' ');
						}
					}
					s++;
				}
				v++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
