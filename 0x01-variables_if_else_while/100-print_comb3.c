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

	i = 0;
	while (i < 10)
	{
		s = 1;
		while (s < 10)
		{
			if (s > i)
			{
				putchar(i + '0');
				putchar(s + '0');
				if (i != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
			s++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
