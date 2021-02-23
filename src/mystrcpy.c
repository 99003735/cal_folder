
#include "mystring.h"

char* mystrcpy(char *str1, char *str2)
{
    int j;
    for(j=0;str1[j]!='\0';++j)
    {
        str2[j]=str1[j];
    }
    str[j]='\0';
    return str2;
}

