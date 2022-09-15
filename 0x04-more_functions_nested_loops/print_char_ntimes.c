/**
 * print_char_ntimes - prints a given character,
 * a given number of times to the terminal
 * @c: the character to be printed
 * @n: is the number of times the space character should be printed
 *
 * Return: void.
 */

void print_char_ntimes(char c, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(c);
	}
}
