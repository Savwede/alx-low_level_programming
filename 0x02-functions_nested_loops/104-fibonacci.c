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
	long int prev = 1;
	long int nxt = 2;

	printf("%ld, ", prev);
	for (i = 0; i < 99; i++)
	{
		long int cur = nxt;

		printf("%lb, ", nxt);
		nxt += prev;
		prev = cur;
	}
	printf("\n");
	return (0);
}
