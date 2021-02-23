#include "bitmask.h"

int reset(int input, int bit)
{
    return(input & (~(1 << bit)));
}
