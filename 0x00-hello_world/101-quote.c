#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * Printing directly to the system instesd of printf or puts
 */

int main(void)
{
char str[] = "$(echo \"and that piece of art is useful\" - Dora Korpar, 2015-10-19\")"; 
/**/
system(str);
 return (0);
}
