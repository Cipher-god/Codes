#include <stdio.h>
#define PI 3.1428

float AreaOfCircle(float r)
{
    return (PI*r*r);
}

int main()
{
  float (*Fptr)(float) = NULL;
  Fptr = AreaOfCircle;
  float r = 7;
  printf("Area of circle of radius 7 : %f ",(*Fptr)(r));
  printf("\n\nAddress of func AreaOfCircle: %x ",AreaOfCircle);

  // printf("\n\nAdress %x",*Fptr);
  // printf("\n\nAddress %x",&AreaOfCircle);
 
  return 0;
}