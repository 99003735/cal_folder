#include "bitmask.h"

int flip_number(int input,int output)
{
    scanf("%d",&input);
    output= ~input;
    return output;

}