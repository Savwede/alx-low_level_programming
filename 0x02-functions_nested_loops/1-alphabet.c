#include <unistd.h>
#include "main.h"
#include <string.h>

 /**
 * print_alphabet - prints 'a' to 'z'
 *
 * Return: void.
 */
 void print_alphabet(void)
 {
 	char ch;

 	for (ch = 'a'; ch <= 'z'; ch++)
 	{
 		_putchar(ch);
	}
	_putchar('\n');
 }
