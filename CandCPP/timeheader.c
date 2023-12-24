#include <stdio.h>
#include <time.h>
int main()
{
   time_t today; 
   time(&today);
   printf("Today Date and Time is : %s",ctime(&today));
  return 0;
}