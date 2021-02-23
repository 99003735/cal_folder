#include "myutils.h"
int prime(int a)
{
    int p;
    for(p=2;p<=a-1;p++)
    {
        if(a%p ==0)
        return 0;
    }
    return 1;
}