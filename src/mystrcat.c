#include "mystring.h"

char* mystrcat(char* str1, char* str2)
{
    int len,i;
    len = strlen(str1);
    for(i=0;str2[i]!='\0';i++)
    {
        str1[len]=str2[i];
        len++;
    }
    str1[len]='\0';
    return str1;
}
