
#include "mystring.h"

int mystrlen(chat *str);
{
    int len=0;
    int j=0;
    while(str[j]!='\0')
    len++;
    return len;
}

