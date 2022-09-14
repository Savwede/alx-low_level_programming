#include "main.h"
/**
* _islower - checks if a character is lowercase
* or not
* return: 1 for lowercase or 0 otherwise
*/

int _islower(int c)
{
    if (c < 'a')
        return (0);
    if (c > 'z')
        return (0);
    return (1);
}
