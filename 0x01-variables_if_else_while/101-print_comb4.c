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
	int s;
	int v;

	i = 0;
	while (i < 10)
	{
		s = 1;
		while (s < 10)
		{
			v = 2;
			while (v < 10)
			{
				if (s > i && v > s)
				{
					putchar(i + '0');
					putchar(s + '0');
					putchar(v + '0');
					if (i < 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				v++;
			}
			s++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
