#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* _isalpha - checks if a character is an alphabelt
* or not
* return: 1 for alphabelt or 0 otherwise
*/

int _isalpha(int c)
{
    char ch = c + '0';

    if (c < 'A')
    {
        return (0);
    }

    else if (c > 'Z')
    {
        if (c < 'a')
        {
            return (0);
        }
        if (c > 'z')
        {
            return (0);
        }
    }
    return (1);
}
