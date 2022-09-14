#include "main.h"
/**
* print_sign - checks if a number is +ve, 0 or -ve
*
* return: 1 for +ve,
* 0 for zero and -1 for -ve
*/
int print_sign(int n)
{
    if (n > 0)
    {
        _putchar('+');
        return (1);
    } else if (n < 0)
    {
        _putchar('-');
        return (-1);
    }
    _putchar('0');
    return (0);
}
