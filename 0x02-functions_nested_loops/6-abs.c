#include "main.h"
/**
* _abs - computes the absolute value of an integer.
*
* return: Always +ve value,
*/
int _abs(int val)
{
    if (val < 0)
        return (val * (-1));
    return (val);
}
