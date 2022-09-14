#include <unistd.h>
#include "main.h"
#include <string.h>
/**
 * main - calls _putchar() to print out every character of "_putchar"
 * followed by a new line.
 * Return: On success 0.
 * On error, 1.
 */
int main(void)
{
        char ch[] = "_putchar";
        int i;

        for (i = 0; i < 8; i++)
        {
                _putchar(ch[i]);
        }
        _putchar('\n');
        return (0);
}
