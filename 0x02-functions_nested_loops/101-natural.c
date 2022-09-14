#include <stdio.h>
#include "main.h"
/**
 * main - check and execute other funcions
 *
 * Return: On success 0.
 * On error, -1 is returned, .
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
