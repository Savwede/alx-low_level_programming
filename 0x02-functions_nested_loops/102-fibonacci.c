#include <stdio.h>
#include "main.h"
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
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
	for (i = 0; i < 49; i++)
	{
		long int cur = nxt;

		if (i == 48)
			printf("%ld", nxt);
		else
			printf("%ld, ", nxt);
		nxt += prev;
		prev = cur;
	}
	printf("\n");
	return (0);
}
