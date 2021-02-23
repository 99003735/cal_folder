#include "mystring.h"

char* mystrcat(char *str1,  char *str2);
{
  int len,p;
  len = strlen(str1);
  for(p=0;str2[p]!='\0';p++)
  {
      str[len]=str2[p];
      len++;
  }
  str[len]='\0';
  return str1;
}
