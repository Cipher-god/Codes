#include <stdio.h>
#include <math.h>

float Eucliddistance (int x1 ,int y1,int x2,int y2)
{
  float eudistance;

  eudistance = sqrt (pow((y1 - x1),2) + pow((y2 - x2),2));
   
  // printf ("THe euclid distance is : %f",eudistance);
  return eudistance;
  
}

float AreaofTriangle(float side)
{
  printf("Hello User Good morning The area of triangle is: \n");
  printf("%0.2f",sqrt(3)/4 * pow(side,2)) ;

}

float AreaofCircle (float r)
{ 
  printf("Hello User Good morning The area of circle is: \n");
  printf("%0.2f",r * r *3.14) ;
}

int main()
{
  int x1, y1;
  int x2, y2;
  float euDistance;
  float (*p)(float) = NULL;
  
  printf("Enter x1 and y1 : ");
  scanf("%d%d",&x1,&y1);
 
  printf("Enter x2 and y2 : ");
  scanf("%d%d",&x2,&y2);
  // p=AreaofCircle;
 
 euDistance = Eucliddistance(x1, y1,x2, y2);

 AreaofCircle(euDistance);
//  AreaofTriangle(euDistance);
 
  
 return 0;
}