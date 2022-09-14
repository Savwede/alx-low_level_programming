#include <stdio.h>
#include "main.h"
/**
 * main - prints the sum of the even-valued terms not exceeding 4,000,000
 * starting with 1 and 2.
 * Return: On success 0.
 * On error, -1 is returned, .
 */
int main(void)
{
	int i;
	int prev = 1;
	int nxt = 2;
	int sum = 0;

	for (i = 0; i < nxt; i++)
	{
		if (nxt >= 4000000)
			break;
		if (nxt % 2 == 0)
			sum += nxt;
		int cur;

		cur = nxt;
		nxt += prev;
		prev = cur;
	}
	printf("%d\n", sum);
	return (0);
}
