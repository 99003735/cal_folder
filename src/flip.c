#include "bitmask.h"
 
 int flipNum(int input, int output)
 {
     printf("Enter the input : ");
     scanf("%d",&input);
     output = ~input;
     return output;
 }
