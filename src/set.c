#include "bitmask.h"

int set_bit(int n, int p)
{
    return (n | (1 << (p-1)));
}
