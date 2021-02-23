
#include "mystring.h"

int str_Compare(char str1[], char str2[])
{
    int flag=0, k=0;
    while(str1[k]!='\0' && str2[k] !='\0')
    {
        if(str1[k] != str2[k])
        {
            flag=1;
            break;
        }
        k++;
    }
    if(flag==0)
    return 0;
    else
    return 1;
}
