#include "myutils.h"
#include "stdarg.h"

double vsum(int num...)
{
    va_list valist;
    double sum = 0;
    va_start(valist,num);
    for(int i=0;i<num;i++)
    {
        sum+=va_arg(valist,int);
    }
    va_end(valist);
    return sum;
}

