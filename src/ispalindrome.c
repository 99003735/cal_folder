#include "myutils.h"

int check_Palindrome(int num)
{
 int temp, rem, rev=0;
  temp = num;
  while( num!=0 )
  {
     rem = num % 10;
     rev = rev*10 + rem;
     num /= 10;
  }
  if ( rev == temp )
   return 0;
  else 
  return 1;
}
