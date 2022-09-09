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

	let =  'z';
	while (let >= 'a')
	{
		putchar(let);
		let--;
	}
	putchar('\n');
	return (0);
}
