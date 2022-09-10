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
	char ch;

	i = 0;
	ch = 'a';
	while (i < 16)
	{
		if (i < 10)
		{
			putchar(i + '0');
		} else
		{
			putchar(ch);
			ch++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
