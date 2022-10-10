#include <stdio.h>
/**
 * main - prints the file name from which it is executed
 *
 * Return: 0 on success
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return 0;
}
