#include <stdio.h>
#include "main.h"
/**
 * main - prints the first 100 Fibonacci numbers, starting with 1 and 2
 *
 * Return: On success 0.
 * On error, -1 is returned, .
 */
int main(void)
{
	int i;
	int prev = 1;
	int nxt = 2;

	printf("%d, ", prev);
	for (i = 0; i < 99; i++)
	{
		int cur = nxt;

		printf("%o, ", nxt);
		nxt += prev;
		prev = cur;
	}
	printf("\n");
	return (0);
}
