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
	char let;

	let =  'a';
	while (let <= 'z')
	{
		if (let == 'e')
		{
			let++;
		} else if (let == 'q')
		{
			let++;
		} else
		{
			putchar(let);
			let++;
		}
	}
	putchar('\n');
	return (0);
}
